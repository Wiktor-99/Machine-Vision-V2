/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "object_widget.h"
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionUsu_model;
    QAction *actionStart;
    QAction *actionStop;
    QAction *actionPrzeszukaj_porty;
    QAction *actionZa_aduj_model;
    QAction *actionZa_aduj_siatke;
    QAction *actionZnajd_port;
    QAction *actionDodaj_pozycj;
    QAction *actionWyczy_sekwencj;
    QAction *actionStart_2;
    QAction *actionStop_2;
    QAction *actionNarysuj_linie;
    QAction *actionNarysuj_kolo;
    QWidget *centralwidget;
    QGridLayout *gridLayout_7;
    QGridLayout *gridLayout_6;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout_10;
    QPushButton *motor1L;
    QPushButton *motor1R;
    QPushButton *motor2L;
    QPushButton *motor2R;
    QPushButton *pushButton_5;
    QGridLayout *gridLayout;
    QLabel *xRotationLabel;
    QLabel *yRotationLabel;
    QLabel *yTranslationValue;
    QLabel *zRotationValue;
    QLabel *zTranslationValue;
    QLabel *yRotationValue;
    QLabel *xTranslationValue;
    QLabel *xRotationValue;
    QLabel *zRotationLabel;
    QLabel *TranslationLabel;
    QLabel *RotationLabel;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QGridLayout *gridLayout_4;
    QCustomPlot *plotYAxis;
    QGridLayout *gridLayout_3;
    QLabel *label;
    QLabel *J3sliderValue;
    QPushButton *resetViewButton;
    QLabel *J2sliderValue;
    QSlider *horizontalSlider_2;
    QSlider *horizontalSlider;
    QLabel *label_5;
    QLabel *J1sliderValue;
    QSlider *horizontalSlider_3;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout_8;
    QLabel *label_7;
    QLabel *label_8;
    QDoubleSpinBox *Z_SpinBox;
    QDoubleSpinBox *X_SpinBox;
    QLabel *label_6;
    QDoubleSpinBox *Y_SpinBox;
    QPushButton *positionSetButton;
    QCheckBox *checkBox;
    QGridLayout *gridLayout_5;
    QCustomPlot *plotXAxis;
    Object_Widget *visualizationWidget;
    QMenuBar *menubar;
    QMenu *menuPlik;
    QMenu *menuKomunikacja;
    QMenu *menuWybierz_port;
    QMenu *menuSekwencja;
    QMenu *menuRysowanie;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(891, 632);
        actionUsu_model = new QAction(MainWindow);
        actionUsu_model->setObjectName(QString::fromUtf8("actionUsu_model"));
        actionStart = new QAction(MainWindow);
        actionStart->setObjectName(QString::fromUtf8("actionStart"));
        actionStop = new QAction(MainWindow);
        actionStop->setObjectName(QString::fromUtf8("actionStop"));
        actionPrzeszukaj_porty = new QAction(MainWindow);
        actionPrzeszukaj_porty->setObjectName(QString::fromUtf8("actionPrzeszukaj_porty"));
        actionZa_aduj_model = new QAction(MainWindow);
        actionZa_aduj_model->setObjectName(QString::fromUtf8("actionZa_aduj_model"));
        actionZa_aduj_siatke = new QAction(MainWindow);
        actionZa_aduj_siatke->setObjectName(QString::fromUtf8("actionZa_aduj_siatke"));
        actionZnajd_port = new QAction(MainWindow);
        actionZnajd_port->setObjectName(QString::fromUtf8("actionZnajd_port"));
        actionDodaj_pozycj = new QAction(MainWindow);
        actionDodaj_pozycj->setObjectName(QString::fromUtf8("actionDodaj_pozycj"));
        actionWyczy_sekwencj = new QAction(MainWindow);
        actionWyczy_sekwencj->setObjectName(QString::fromUtf8("actionWyczy_sekwencj"));
        actionStart_2 = new QAction(MainWindow);
        actionStart_2->setObjectName(QString::fromUtf8("actionStart_2"));
        actionStop_2 = new QAction(MainWindow);
        actionStop_2->setObjectName(QString::fromUtf8("actionStop_2"));
        actionNarysuj_linie = new QAction(MainWindow);
        actionNarysuj_linie->setObjectName(QString::fromUtf8("actionNarysuj_linie"));
        actionNarysuj_kolo = new QAction(MainWindow);
        actionNarysuj_kolo->setObjectName(QString::fromUtf8("actionNarysuj_kolo"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_7 = new QGridLayout(centralwidget);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_10 = new QGridLayout();
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        motor1L = new QPushButton(centralwidget);
        motor1L->setObjectName(QString::fromUtf8("motor1L"));

        gridLayout_10->addWidget(motor1L, 0, 0, 1, 1);

        motor1R = new QPushButton(centralwidget);
        motor1R->setObjectName(QString::fromUtf8("motor1R"));

        gridLayout_10->addWidget(motor1R, 0, 2, 1, 1);

        motor2L = new QPushButton(centralwidget);
        motor2L->setObjectName(QString::fromUtf8("motor2L"));

        gridLayout_10->addWidget(motor2L, 1, 0, 1, 1);

        motor2R = new QPushButton(centralwidget);
        motor2R->setObjectName(QString::fromUtf8("motor2R"));

        gridLayout_10->addWidget(motor2R, 1, 2, 1, 1);

        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        gridLayout_10->addWidget(pushButton_5, 2, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout_10, 0, 0, 1, 1);


        gridLayout_6->addLayout(gridLayout_2, 7, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        xRotationLabel = new QLabel(centralwidget);
        xRotationLabel->setObjectName(QString::fromUtf8("xRotationLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(xRotationLabel->sizePolicy().hasHeightForWidth());
        xRotationLabel->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(11);
        xRotationLabel->setFont(font);
        xRotationLabel->setAlignment(Qt::AlignCenter);
        xRotationLabel->setMargin(5);

        gridLayout->addWidget(xRotationLabel, 1, 0, 1, 1);

        yRotationLabel = new QLabel(centralwidget);
        yRotationLabel->setObjectName(QString::fromUtf8("yRotationLabel"));
        sizePolicy.setHeightForWidth(yRotationLabel->sizePolicy().hasHeightForWidth());
        yRotationLabel->setSizePolicy(sizePolicy);
        yRotationLabel->setFont(font);
        yRotationLabel->setAlignment(Qt::AlignCenter);
        yRotationLabel->setMargin(5);

        gridLayout->addWidget(yRotationLabel, 2, 0, 1, 1);

        yTranslationValue = new QLabel(centralwidget);
        yTranslationValue->setObjectName(QString::fromUtf8("yTranslationValue"));
        sizePolicy.setHeightForWidth(yTranslationValue->sizePolicy().hasHeightForWidth());
        yTranslationValue->setSizePolicy(sizePolicy);
        yTranslationValue->setFont(font);
        yTranslationValue->setFrameShape(QFrame::NoFrame);
        yTranslationValue->setAlignment(Qt::AlignCenter);
        yTranslationValue->setMargin(5);

        gridLayout->addWidget(yTranslationValue, 2, 3, 1, 1);

        zRotationValue = new QLabel(centralwidget);
        zRotationValue->setObjectName(QString::fromUtf8("zRotationValue"));
        sizePolicy.setHeightForWidth(zRotationValue->sizePolicy().hasHeightForWidth());
        zRotationValue->setSizePolicy(sizePolicy);
        zRotationValue->setFont(font);
        zRotationValue->setFrameShape(QFrame::NoFrame);
        zRotationValue->setAlignment(Qt::AlignCenter);
        zRotationValue->setMargin(5);

        gridLayout->addWidget(zRotationValue, 3, 1, 1, 1);

        zTranslationValue = new QLabel(centralwidget);
        zTranslationValue->setObjectName(QString::fromUtf8("zTranslationValue"));
        sizePolicy.setHeightForWidth(zTranslationValue->sizePolicy().hasHeightForWidth());
        zTranslationValue->setSizePolicy(sizePolicy);
        zTranslationValue->setFont(font);
        zTranslationValue->setFrameShape(QFrame::NoFrame);
        zTranslationValue->setAlignment(Qt::AlignCenter);
        zTranslationValue->setMargin(5);

        gridLayout->addWidget(zTranslationValue, 3, 3, 1, 1);

        yRotationValue = new QLabel(centralwidget);
        yRotationValue->setObjectName(QString::fromUtf8("yRotationValue"));
        sizePolicy.setHeightForWidth(yRotationValue->sizePolicy().hasHeightForWidth());
        yRotationValue->setSizePolicy(sizePolicy);
        yRotationValue->setFont(font);
        yRotationValue->setFrameShape(QFrame::NoFrame);
        yRotationValue->setAlignment(Qt::AlignCenter);
        yRotationValue->setMargin(5);

        gridLayout->addWidget(yRotationValue, 2, 1, 1, 1);

        xTranslationValue = new QLabel(centralwidget);
        xTranslationValue->setObjectName(QString::fromUtf8("xTranslationValue"));
        sizePolicy.setHeightForWidth(xTranslationValue->sizePolicy().hasHeightForWidth());
        xTranslationValue->setSizePolicy(sizePolicy);
        xTranslationValue->setFont(font);
        xTranslationValue->setFrameShape(QFrame::NoFrame);
        xTranslationValue->setAlignment(Qt::AlignCenter);
        xTranslationValue->setMargin(5);

        gridLayout->addWidget(xTranslationValue, 1, 3, 1, 1);

        xRotationValue = new QLabel(centralwidget);
        xRotationValue->setObjectName(QString::fromUtf8("xRotationValue"));
        sizePolicy.setHeightForWidth(xRotationValue->sizePolicy().hasHeightForWidth());
        xRotationValue->setSizePolicy(sizePolicy);
        xRotationValue->setFont(font);
        xRotationValue->setFrameShape(QFrame::NoFrame);
        xRotationValue->setAlignment(Qt::AlignCenter);
        xRotationValue->setMargin(5);

        gridLayout->addWidget(xRotationValue, 1, 1, 1, 1);

        zRotationLabel = new QLabel(centralwidget);
        zRotationLabel->setObjectName(QString::fromUtf8("zRotationLabel"));
        sizePolicy.setHeightForWidth(zRotationLabel->sizePolicy().hasHeightForWidth());
        zRotationLabel->setSizePolicy(sizePolicy);
        zRotationLabel->setFont(font);
        zRotationLabel->setAlignment(Qt::AlignCenter);
        zRotationLabel->setMargin(5);

        gridLayout->addWidget(zRotationLabel, 3, 0, 1, 1);

        TranslationLabel = new QLabel(centralwidget);
        TranslationLabel->setObjectName(QString::fromUtf8("TranslationLabel"));
        sizePolicy.setHeightForWidth(TranslationLabel->sizePolicy().hasHeightForWidth());
        TranslationLabel->setSizePolicy(sizePolicy);
        TranslationLabel->setFont(font);
        TranslationLabel->setFrameShape(QFrame::NoFrame);
        TranslationLabel->setFrameShadow(QFrame::Plain);
        TranslationLabel->setLineWidth(1);
        TranslationLabel->setTextFormat(Qt::PlainText);
        TranslationLabel->setAlignment(Qt::AlignCenter);
        TranslationLabel->setMargin(5);

        gridLayout->addWidget(TranslationLabel, 0, 3, 1, 1);

        RotationLabel = new QLabel(centralwidget);
        RotationLabel->setObjectName(QString::fromUtf8("RotationLabel"));
        sizePolicy.setHeightForWidth(RotationLabel->sizePolicy().hasHeightForWidth());
        RotationLabel->setSizePolicy(sizePolicy);
        RotationLabel->setFont(font);
        RotationLabel->setFrameShape(QFrame::NoFrame);
        RotationLabel->setTextFormat(Qt::PlainText);
        RotationLabel->setAlignment(Qt::AlignCenter);
        RotationLabel->setMargin(5);

        gridLayout->addWidget(RotationLabel, 0, 1, 1, 1);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 1, 2, 1, 1);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_3, 2, 2, 1, 1);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_4, 3, 2, 1, 1);


        gridLayout_6->addLayout(gridLayout, 0, 0, 1, 1);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        plotYAxis = new QCustomPlot(centralwidget);
        plotYAxis->setObjectName(QString::fromUtf8("plotYAxis"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(1);
        sizePolicy1.setHeightForWidth(plotYAxis->sizePolicy().hasHeightForWidth());
        plotYAxis->setSizePolicy(sizePolicy1);

        gridLayout_4->addWidget(plotYAxis, 0, 0, 1, 1);


        gridLayout_6->addLayout(gridLayout_4, 6, 0, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(0);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(-1, -1, -1, 0);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_3->addWidget(label, 1, 0, 1, 1);

        J3sliderValue = new QLabel(centralwidget);
        J3sliderValue->setObjectName(QString::fromUtf8("J3sliderValue"));
        J3sliderValue->setFont(font);
        J3sliderValue->setAlignment(Qt::AlignCenter);
        J3sliderValue->setMargin(0);

        gridLayout_3->addWidget(J3sliderValue, 3, 1, 1, 1);

        resetViewButton = new QPushButton(centralwidget);
        resetViewButton->setObjectName(QString::fromUtf8("resetViewButton"));
        QFont font1;
        font1.setPointSize(9);
        resetViewButton->setFont(font1);

        gridLayout_3->addWidget(resetViewButton, 4, 2, 1, 1);

        J2sliderValue = new QLabel(centralwidget);
        J2sliderValue->setObjectName(QString::fromUtf8("J2sliderValue"));
        J2sliderValue->setFont(font);
        J2sliderValue->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(J2sliderValue, 2, 1, 1, 1);

        horizontalSlider_2 = new QSlider(centralwidget);
        horizontalSlider_2->setObjectName(QString::fromUtf8("horizontalSlider_2"));
        horizontalSlider_2->setMinimum(-130);
        horizontalSlider_2->setMaximum(130);
        horizontalSlider_2->setPageStep(1);
        horizontalSlider_2->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(horizontalSlider_2, 2, 2, 1, 1);

        horizontalSlider = new QSlider(centralwidget);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setMinimum(-10);
        horizontalSlider->setMaximum(190);
        horizontalSlider->setPageStep(1);
        horizontalSlider->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(horizontalSlider, 1, 2, 1, 1);

        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);

        gridLayout_3->addWidget(label_5, 4, 1, 1, 1);

        J1sliderValue = new QLabel(centralwidget);
        J1sliderValue->setObjectName(QString::fromUtf8("J1sliderValue"));
        J1sliderValue->setFont(font);
        J1sliderValue->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(J1sliderValue, 1, 1, 1, 1);

        horizontalSlider_3 = new QSlider(centralwidget);
        horizontalSlider_3->setObjectName(QString::fromUtf8("horizontalSlider_3"));
        horizontalSlider_3->setMaximum(180);
        horizontalSlider_3->setPageStep(1);
        horizontalSlider_3->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(horizontalSlider_3, 3, 2, 1, 1);


        gridLayout_6->addLayout(gridLayout_3, 2, 0, 1, 1);

        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout_8 = new QGridLayout();
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        label_7 = new QLabel(widget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font1);
        label_7->setAlignment(Qt::AlignCenter);

        gridLayout_8->addWidget(label_7, 0, 1, 1, 1);

        label_8 = new QLabel(widget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font1);
        label_8->setAlignment(Qt::AlignCenter);

        gridLayout_8->addWidget(label_8, 0, 2, 1, 1);

        Z_SpinBox = new QDoubleSpinBox(widget);
        Z_SpinBox->setObjectName(QString::fromUtf8("Z_SpinBox"));
        Z_SpinBox->setMaximum(4.000000000000000);

        gridLayout_8->addWidget(Z_SpinBox, 1, 2, 1, 1);

        X_SpinBox = new QDoubleSpinBox(widget);
        X_SpinBox->setObjectName(QString::fromUtf8("X_SpinBox"));
        X_SpinBox->setMinimum(-99.000000000000000);

        gridLayout_8->addWidget(X_SpinBox, 1, 0, 1, 1);

        label_6 = new QLabel(widget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMinimumSize(QSize(88, 21));
        label_6->setFont(font1);
        label_6->setScaledContents(false);
        label_6->setAlignment(Qt::AlignCenter);

        gridLayout_8->addWidget(label_6, 0, 0, 1, 1);

        Y_SpinBox = new QDoubleSpinBox(widget);
        Y_SpinBox->setObjectName(QString::fromUtf8("Y_SpinBox"));

        gridLayout_8->addWidget(Y_SpinBox, 1, 1, 1, 1);

        positionSetButton = new QPushButton(widget);
        positionSetButton->setObjectName(QString::fromUtf8("positionSetButton"));

        gridLayout_8->addWidget(positionSetButton, 2, 0, 1, 3);

        checkBox = new QCheckBox(widget);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        gridLayout_8->addWidget(checkBox, 1, 3, 1, 1);


        verticalLayout->addLayout(gridLayout_8);


        gridLayout_6->addWidget(widget, 3, 0, 1, 1);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        plotXAxis = new QCustomPlot(centralwidget);
        plotXAxis->setObjectName(QString::fromUtf8("plotXAxis"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(1);
        sizePolicy2.setVerticalStretch(1);
        sizePolicy2.setHeightForWidth(plotXAxis->sizePolicy().hasHeightForWidth());
        plotXAxis->setSizePolicy(sizePolicy2);

        gridLayout_5->addWidget(plotXAxis, 0, 0, 1, 1);


        gridLayout_6->addLayout(gridLayout_5, 5, 0, 1, 1);


        gridLayout_7->addLayout(gridLayout_6, 0, 0, 1, 1);

        visualizationWidget = new Object_Widget(centralwidget);
        visualizationWidget->setObjectName(QString::fromUtf8("visualizationWidget"));

        gridLayout_7->addWidget(visualizationWidget, 0, 1, 1, 1);

        gridLayout_7->setColumnStretch(0, 1);
        gridLayout_7->setColumnStretch(1, 2);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 891, 20));
        menuPlik = new QMenu(menubar);
        menuPlik->setObjectName(QString::fromUtf8("menuPlik"));
        menuKomunikacja = new QMenu(menubar);
        menuKomunikacja->setObjectName(QString::fromUtf8("menuKomunikacja"));
        menuWybierz_port = new QMenu(menuKomunikacja);
        menuWybierz_port->setObjectName(QString::fromUtf8("menuWybierz_port"));
        menuSekwencja = new QMenu(menubar);
        menuSekwencja->setObjectName(QString::fromUtf8("menuSekwencja"));
        menuRysowanie = new QMenu(menubar);
        menuRysowanie->setObjectName(QString::fromUtf8("menuRysowanie"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuPlik->menuAction());
        menubar->addAction(menuKomunikacja->menuAction());
        menubar->addAction(menuSekwencja->menuAction());
        menubar->addAction(menuRysowanie->menuAction());
        menuPlik->addAction(actionZa_aduj_model);
        menuPlik->addAction(actionUsu_model);
        menuKomunikacja->addAction(actionStart);
        menuKomunikacja->addAction(actionStop);
        menuKomunikacja->addAction(menuWybierz_port->menuAction());
        menuKomunikacja->addAction(actionZnajd_port);
        menuWybierz_port->addSeparator();
        menuSekwencja->addAction(actionDodaj_pozycj);
        menuSekwencja->addAction(actionWyczy_sekwencj);
        menuSekwencja->addAction(actionStart_2);
        menuSekwencja->addAction(actionStop_2);
        menuRysowanie->addAction(actionNarysuj_linie);
        menuRysowanie->addAction(actionNarysuj_kolo);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionUsu_model->setText(QApplication::translate("MainWindow", "Usu\305\204 model", nullptr));
        actionStart->setText(QApplication::translate("MainWindow", "Start", nullptr));
        actionStop->setText(QApplication::translate("MainWindow", "Stop", nullptr));
        actionPrzeszukaj_porty->setText(QApplication::translate("MainWindow", "Przeszukaj porty", nullptr));
        actionZa_aduj_model->setText(QApplication::translate("MainWindow", "Za\305\202aduj model", nullptr));
        actionZa_aduj_siatke->setText(QApplication::translate("MainWindow", "Za\305\202aduj siatke", nullptr));
        actionZnajd_port->setText(QApplication::translate("MainWindow", "Znajd\305\272 port", nullptr));
        actionDodaj_pozycj->setText(QApplication::translate("MainWindow", "Dodaj pozycj\304\231", nullptr));
        actionWyczy_sekwencj->setText(QApplication::translate("MainWindow", "Wyczy\305\233\304\207 sekwencj\304\231", nullptr));
        actionStart_2->setText(QApplication::translate("MainWindow", "Start", nullptr));
        actionStop_2->setText(QApplication::translate("MainWindow", "Stop", nullptr));
        actionNarysuj_linie->setText(QApplication::translate("MainWindow", "Narysuj linie", nullptr));
        actionNarysuj_kolo->setText(QApplication::translate("MainWindow", "Narysuj ko\305\202o", nullptr));
        motor1L->setText(QApplication::translate("MainWindow", "Nap\304\231d J1 Lewo", nullptr));
        motor1R->setText(QApplication::translate("MainWindow", "Nap\304\231d J1 Prawo", nullptr));
        motor2L->setText(QApplication::translate("MainWindow", "Nap\304\231d J2 Lewo", nullptr));
        motor2R->setText(QApplication::translate("MainWindow", "Nap\304\231d J2 Prawo", nullptr));
        pushButton_5->setText(QApplication::translate("MainWindow", "Przypisz Pozycj\304\231 Startow\304\205", nullptr));
        xRotationLabel->setText(QApplication::translate("MainWindow", "J1:", nullptr));
        yRotationLabel->setText(QApplication::translate("MainWindow", "J2:", nullptr));
        yTranslationValue->setText(QApplication::translate("MainWindow", "dane", nullptr));
        zRotationValue->setText(QApplication::translate("MainWindow", "dane", nullptr));
        zTranslationValue->setText(QApplication::translate("MainWindow", "dane", nullptr));
        yRotationValue->setText(QApplication::translate("MainWindow", "dane", nullptr));
        xTranslationValue->setText(QApplication::translate("MainWindow", "dane", nullptr));
        xRotationValue->setText(QApplication::translate("MainWindow", "dane", nullptr));
        zRotationLabel->setText(QApplication::translate("MainWindow", "J3:", nullptr));
        TranslationLabel->setText(QApplication::translate("MainWindow", "Pozycja efektora[cm]", nullptr));
        RotationLabel->setText(QApplication::translate("MainWindow", "Rotacja na przegubach [deg]", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "X:", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Y:", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Z:", nullptr));
        label->setText(QString());
        J3sliderValue->setText(QApplication::translate("MainWindow", "dane", nullptr));
        resetViewButton->setText(QApplication::translate("MainWindow", "Wykonaj ruch o zadane k\304\205ty", nullptr));
#ifndef QT_NO_SHORTCUT
        resetViewButton->setShortcut(QApplication::translate("MainWindow", "R", nullptr));
#endif // QT_NO_SHORTCUT
        J2sliderValue->setText(QApplication::translate("MainWindow", "dane", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "[deg]", nullptr));
        J1sliderValue->setText(QApplication::translate("MainWindow", "dane", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "Wsp\303\263\305\202rz\304\231dna osi Y[cm]", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "Wsp\303\263\305\202rz\304\231dna osi Z[cm]", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "Wsp\303\263\305\202rz\304\231dna osi X[cm]", nullptr));
        positionSetButton->setText(QApplication::translate("MainWindow", "Wykonaj ruch do zadanej pozycji", nullptr));
        checkBox->setText(QApplication::translate("MainWindow", "Tryb", nullptr));
        menuPlik->setTitle(QApplication::translate("MainWindow", "Plik", nullptr));
        menuKomunikacja->setTitle(QApplication::translate("MainWindow", "Komunikacja", nullptr));
        menuWybierz_port->setTitle(QApplication::translate("MainWindow", "Wybierz port", nullptr));
        menuSekwencja->setTitle(QApplication::translate("MainWindow", "Sekwencja", nullptr));
        menuRysowanie->setTitle(QApplication::translate("MainWindow", "Rysowanie", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
