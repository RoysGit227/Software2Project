/********************************************************************************
** Form generated from reading UI file 'spo2main.ui'
**
** Created by: Qt User Interface Compiler version 6.1.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPO2MAIN_H
#define UI_SPO2MAIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SpO2Main
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *SpO2Main)
    {
        if (SpO2Main->objectName().isEmpty())
            SpO2Main->setObjectName(QString::fromUtf8("SpO2Main"));
        SpO2Main->resize(800, 600);
        menubar = new QMenuBar(SpO2Main);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        SpO2Main->setMenuBar(menubar);
        centralwidget = new QWidget(SpO2Main);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        SpO2Main->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(SpO2Main);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        SpO2Main->setStatusBar(statusbar);

        retranslateUi(SpO2Main);

        QMetaObject::connectSlotsByName(SpO2Main);
    } // setupUi

    void retranslateUi(QMainWindow *SpO2Main)
    {
        SpO2Main->setWindowTitle(QCoreApplication::translate("SpO2Main", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SpO2Main: public Ui_SpO2Main {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPO2MAIN_H
