import os
import cv2 as cv2
import numpy as np
from picamera2 import Picamera2



lower_blue = np.array([90, 120, 185])
upper_blue = np.array([120, 255, 255])

lower_green = np.array([40, 120, 80])
upper_green = np.array([89, 255, 255])

lower_red = np.array([160,100,20])
upper_red = np.array([179,255,255])


def undistort(img):
    mtx = np.array([[12920.60647764167, 0.0, 357.8721871860031], [0.0, 11143.808652065321, 239.27672854732165], [0.0, 0.0, 1.0]])
    dist = np.array([[6.278031141727818, -0.019627364334711413, 0.21037333162895994, 0.13678303372043632, -2.8818724355240004e-06]])
    h,  w = img.shape[:2]
    newcameramtx, roi = cv2.getOptimalNewCameraMatrix(mtx, dist, (w,h), 1, (w,h))

    # undistort
    mapx, mapy = cv2.initUndistortRectifyMap(mtx, dist, None, newcameramtx, (w,h), 5)
    dst = cv2.remap(img, mapx, mapy, cv2.INTER_LINEAR)
    x, y, w, h = roi
    dst = dst[y:y+h, x:x+w]
    return dst

def detect_circles(im2):
    kernel = np.ones((5,5),np.uint8)
    hsv = cv2.cvtColor(im2, cv2.COLOR_BGR2HSV)
    mask_red = cv2.inRange(hsv, lower_red, upper_red)
    mask_blue = cv2.inRange(hsv, lower_blue, upper_blue)
    mask_green = cv2.inRange(hsv, lower_green, upper_green)

    mask_green = cv2.dilate(mask_green, kernel,iterations = 2)
    mask_red = cv2.dilate(mask_red, kernel,iterations = 2)
    mask_blue = cv2.dilate(mask_blue, kernel,iterations = 2)

    res_red = cv2.bitwise_and(im2,im2, mask= mask_red)
    res_blue = cv2.bitwise_and(im2,im2, mask= mask_blue)
    res_green = cv2.bitwise_and(im2,im2, mask= mask_green)

    return res_red, res_blue, res_green

def gamma_corection(im2):
    gamma = 0.9
    lookUpTable = np.empty((1,256), np.uint8)
    for i in range(256):
        lookUpTable[0,i] = np.clip(pow(i / 255.0, gamma) * 255.0, 0, 255)

    im2 = cv2.LUT(im2, lookUpTable)
    return im2

def get_circles(res):
    _, _, v = cv2.split(res)
    v = cv2.medianBlur(v, 5)
    circles = cv2.HoughCircles(v, cv2.HOUGH_GRADIENT, 1, 20, param1=50, param2=30, minRadius=30, maxRadius=60)

    return circles

def find_circles(picam):
    frame = picam.capture_array()
    frame = gamma_corection(frame)
    red_circles_imgs, blue_circles_imgs, green_circles_imgs = detect_circles(frame)

    return get_circles(red_circles_imgs), get_circles(blue_circles_imgs), get_circles(green_circles_imgs), frame

def draw_circles(circles, original_image):
    for c in circles[0,:]:
        cv2.circle(original_image, (c[0], c[1]), c[2], (0 , 255, 0) ,2)
        cv2.circle(original_image, (c[0], c[1]), 2, (0, 0, 255), 3)

    cv2.imwrite('detected.png', original_image)


def write_all_circles_to_pipe(circles, pipe, color):
    cm_to_px_x = 21.31
    cm_to_px_y = 21.143

    for c in circles[0,:]:
        msg = str(int(((c[0] - 360) / cm_to_px_x)*-100)) + ' ' + str(int((c[1] / cm_to_px_y)*100)) + ' ' + color
        if len(msg) < 20:
            padding = 20 - len(msg)
            msg = msg + padding*' '

        print(msg)
        pipe.write(msg)

def send_end_sign(pipe):
    final_msg = '0 0 S'
    padding = 20 - len(final_msg)
    final_msg = final_msg + padding*' '

    pipe.write(final_msg)
    print("S wysłany")


def main():
    path = "/home/rpi/Desktop/SCARA/build-WDS_Wizualizacja3D-Desktop-Debug/pipe"
    mode = 0o600

    if not os.path.exists(path):
        os.mkfifo(path, mode)
    cv2.startWindowThread()

    picam2 = Picamera2()
    picam2.configure(picam2.create_preview_configuration(main={"format": 'RGB888', "size":  (720, 480)}))
    picam2.start()
    write_pipe = open(path, 'w')

    while(1):
        sign = input("Type f to find circles, type e to close app")
        circles_red = None
        circles_blue = None
        circles_green = None
        red_sent = False
        blue_sent = False
        green_sent = False

        if sign == 'f':
            if write_pipe.closed:
                write_pipe = open(path, 'w')

            while ((circles_red is None or circles_blue is None or circles_green is None) and not (red_sent and blue_sent and green_sent)):

                circles_red, circles_blue, circles_green, original_image = find_circles(picam2)
                if (circles_red is not None) and (not red_sent):
                    circles_red = np.uint16(np.around(circles_red))
                    write_all_circles_to_pipe(circles_red, write_pipe, 'r')
                    draw_circles(circles_red, original_image)
                    circles_red = None
                    red_sent = True

                if (circles_blue is not None) and (not blue_sent):
                    circles_blue = np.uint16(np.around(circles_blue))
                    write_all_circles_to_pipe(circles_blue, write_pipe, 'b')
                    draw_circles(circles_blue, original_image)
                    circles_blue = None
                    blue_sent = True

                if (circles_green is not None) and (not green_sent):
                    circles_green = np.uint16(np.around(circles_green))
                    write_all_circles_to_pipe(circles_green, write_pipe, 'g')
                    draw_circles(circles_green, original_image)
                    circles_green = None
                    green_sent = True

                if red_sent and blue_sent and green_sent:
                    send_end_sign(write_pipe)
                    write_pipe.close()

        elif sign == 'e':
            # write_pipe.close()
            break


main()
