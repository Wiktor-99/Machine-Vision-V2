/********************************************************************************
** Form generated from reading UI file 'object_widget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OBJECT_WIDGET_H
#define UI_OBJECT_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QWidget>
#include "object_scene.h"

QT_BEGIN_NAMESPACE

class Ui_Object_Widget
{
public:
    QGridLayout *gridLayout;
    QWidget *widget_3;
    QGridLayout *gridLayout_2;
    QSplitter *splitter;
    Object_Scene *renderScene;

    void setupUi(QWidget *Object_Widget)
    {
        if (Object_Widget->objectName().isEmpty())
            Object_Widget->setObjectName(QString::fromUtf8("Object_Widget"));
        Object_Widget->resize(866, 609);
        gridLayout = new QGridLayout(Object_Widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        widget_3 = new QWidget(Object_Widget);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        gridLayout_2 = new QGridLayout(widget_3);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        splitter = new QSplitter(widget_3);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(splitter->sizePolicy().hasHeightForWidth());
        splitter->setSizePolicy(sizePolicy);
        splitter->setOrientation(Qt::Horizontal);
        renderScene = new Object_Scene(splitter);
        renderScene->setObjectName(QString::fromUtf8("renderScene"));
        splitter->addWidget(renderScene);

        gridLayout_2->addWidget(splitter, 0, 0, 1, 1);


        gridLayout->addWidget(widget_3, 0, 0, 1, 1);


        retranslateUi(Object_Widget);

        QMetaObject::connectSlotsByName(Object_Widget);
    } // setupUi

    void retranslateUi(QWidget *Object_Widget)
    {
        Object_Widget->setWindowTitle(QApplication::translate("Object_Widget", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Object_Widget: public Ui_Object_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OBJECT_WIDGET_H
