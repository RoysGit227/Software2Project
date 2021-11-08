/********************************************************************************
** Form generated from reading UI file 'cyber.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CYBER_H
#define UI_CYBER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Cyber
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLineEdit *username;
    QLineEdit *password;
    QLabel *label_2;
    QLabel *label_3;
    QWidget *widget;
    QWidget *widget_2;
    QPushButton *signup_Button;
    QPushButton *login_Button;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 480);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 127);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(290, 20, 321, 61));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 0);"));
        username = new QLineEdit(centralwidget);
        username->setObjectName(QString::fromUtf8("username"));
        username->setGeometry(QRect(400, 160, 301, 41));
        username->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        password = new QLineEdit(centralwidget);
        password->setObjectName(QString::fromUtf8("password"));
        password->setGeometry(QRect(400, 270, 301, 41));
        password->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(230, 160, 121, 41));
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 0);"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(230, 270, 121, 41));
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 0);"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(40, 240, 161, 151));
        widget->setStyleSheet(QString::fromUtf8("border-image: url(:/Images/Imagefiles/uteplogo.jpeg);"));
        widget_2 = new QWidget(centralwidget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(49, 50, 151, 161));
        widget_2->setStyleSheet(QString::fromUtf8("border-image: url(:/Images/Imagefiles/afc.jpeg);"));
        signup_Button = new QPushButton(centralwidget);
        signup_Button->setObjectName(QString::fromUtf8("signup_Button"));
        signup_Button->setGeometry(QRect(310, 370, 99, 30));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        signup_Button->setFont(font);
        signup_Button->setStyleSheet(QString::fromUtf8("border-image: url(:/Images/Imagefiles/orangebutton.png);"));
        login_Button = new QPushButton(centralwidget);
        login_Button->setObjectName(QString::fromUtf8("login_Button"));
        login_Button->setGeometry(QRect(480, 370, 99, 30));
        login_Button->setFont(font);
        login_Button->setStyleSheet(QString::fromUtf8("border-image: url(:/Images/Imagefiles/orangebutton.png);"));
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
        label->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:22pt; font-weight:600; color:#ffffff;\">LOGIN</span></p></body></html>", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-weight:600; color:#ffffff;\">Username</span></p></body></html>", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-weight:600; color:#ffffff;\">Password</span></p></body></html>", nullptr));
        signup_Button->setText(QApplication::translate("MainWindow", "Signup", nullptr));
        login_Button->setText(QApplication::translate("MainWindow", "Login", nullptr));
    } // retranslateUi

};

namespace Ui {
class Cyber: public Ui_Cyber {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CYBER_H
