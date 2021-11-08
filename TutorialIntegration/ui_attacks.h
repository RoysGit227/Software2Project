/********************************************************************************
** Form generated from reading UI file 'attacks.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ATTACKS_H
#define UI_ATTACKS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Attacks
{
public:
    QWidget *centralwidget;
    QPushButton *Infect_Button;
    QPushButton *Attack_Button;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *Back_Button;
    QWidget *widget;
    QWidget *widget_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 480);
        QFont font;
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        MainWindow->setFont(font);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(92, 120, 47);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Infect_Button = new QPushButton(centralwidget);
        Infect_Button->setObjectName(QString::fromUtf8("Infect_Button"));
        Infect_Button->setGeometry(QRect(70, 120, 99, 30));
        Attack_Button = new QPushButton(centralwidget);
        Attack_Button->setObjectName(QString::fromUtf8("Attack_Button"));
        Attack_Button->setGeometry(QRect(70, 220, 99, 30));
        Attack_Button->setStyleSheet(QString::fromUtf8("font: 75 12pt \"PibotoLt\";"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(230, 110, 471, 51));
        QFont font1;
        font1.setPointSize(18);
        font1.setBold(true);
        font1.setItalic(true);
        font1.setWeight(75);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(221, 130, 1);"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(227, 210, 471, 51));
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(221, 130, 1);"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(170, 0, 501, 61));
        QFont font2;
        font2.setPointSize(22);
        font2.setBold(true);
        font2.setItalic(false);
        font2.setWeight(75);
        label_3->setFont(font2);
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(23, 2, 138);"));
        Back_Button = new QPushButton(centralwidget);
        Back_Button->setObjectName(QString::fromUtf8("Back_Button"));
        Back_Button->setGeometry(QRect(360, 320, 99, 30));
        QFont font3;
        font3.setBold(true);
        font3.setWeight(75);
        Back_Button->setFont(font3);
        Back_Button->setStyleSheet(QString::fromUtf8("border-image: url(:/Images/Imagefiles/orangebutton.png);"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(150, 290, 151, 121));
        widget->setStyleSheet(QString::fromUtf8("border-image: url(:/Images/Imagefiles/uteplogo.jpeg);"));
        widget_2 = new QWidget(centralwidget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(530, 270, 121, 151));
        widget_2->setStyleSheet(QString::fromUtf8("border-image: url(:/Images/Imagefiles/afc.jpeg);"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 28));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        Infect_Button->setText(QApplication::translate("MainWindow", "Infect", nullptr));
        Attack_Button->setText(QApplication::translate("MainWindow", "Attack", nullptr));
        label->setText(QApplication::translate("MainWindow", "Infect other Network Nodes with DDos Code", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Activate DDos Attack", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" color:#ffffff;\">ATTACKS</span></p></body></html>", nullptr));
        Back_Button->setText(QApplication::translate("MainWindow", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Attacks: public Ui_Attacks {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ATTACKS_H
