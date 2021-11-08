/********************************************************************************
** Form generated from reading UI file 'vulnerabilities.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VULNERABILITIES_H
#define UI_VULNERABILITIES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Vulnerabilities
{
public:
    QAction *Menu_main;
    QAction *Menu_tutorial;
    QAction *Menu_videos;
    QAction *Menu_attacks;
    QAction *Menu_counter;
    QAction *Menu_exit;
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QPushButton *Integrity_Button;
    QPushButton *Confidentiality_Button;
    QPushButton *Availability_Button;
    QPushButton *Back_Button;
    QWidget *widget;
    QWidget *widget_2;
    QMenuBar *menubar;
    QMenu *menuNavigation;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 480);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 127);"));
        Menu_main = new QAction(MainWindow);
        Menu_main->setObjectName(QString::fromUtf8("Menu_main"));
        Menu_tutorial = new QAction(MainWindow);
        Menu_tutorial->setObjectName(QString::fromUtf8("Menu_tutorial"));
        Menu_videos = new QAction(MainWindow);
        Menu_videos->setObjectName(QString::fromUtf8("Menu_videos"));
        Menu_attacks = new QAction(MainWindow);
        Menu_attacks->setObjectName(QString::fromUtf8("Menu_attacks"));
        Menu_counter = new QAction(MainWindow);
        Menu_counter->setObjectName(QString::fromUtf8("Menu_counter"));
        Menu_exit = new QAction(MainWindow);
        Menu_exit->setObjectName(QString::fromUtf8("Menu_exit"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(220, 20, 401, 91));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 0);"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(380, 150, 271, 171));
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(93, 103, 27);"));
        Integrity_Button = new QPushButton(centralwidget);
        Integrity_Button->setObjectName(QString::fromUtf8("Integrity_Button"));
        Integrity_Button->setGeometry(QRect(220, 170, 111, 30));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        Integrity_Button->setFont(font);
        Integrity_Button->setStyleSheet(QString::fromUtf8("border-image: url(:/Images/Imagefiles/orangebutton.png);"));
        Confidentiality_Button = new QPushButton(centralwidget);
        Confidentiality_Button->setObjectName(QString::fromUtf8("Confidentiality_Button"));
        Confidentiality_Button->setGeometry(QRect(220, 220, 111, 30));
        Confidentiality_Button->setFont(font);
        Confidentiality_Button->setStyleSheet(QString::fromUtf8("border-image: url(:/Images/Imagefiles/orangebutton.png);"));
        Availability_Button = new QPushButton(centralwidget);
        Availability_Button->setObjectName(QString::fromUtf8("Availability_Button"));
        Availability_Button->setGeometry(QRect(220, 270, 111, 30));
        Availability_Button->setFont(font);
        Availability_Button->setStyleSheet(QString::fromUtf8("border-image: url(:/Images/Imagefiles/orangebutton.png);"));
        Back_Button = new QPushButton(centralwidget);
        Back_Button->setObjectName(QString::fromUtf8("Back_Button"));
        Back_Button->setGeometry(QRect(360, 370, 99, 30));
        Back_Button->setFont(font);
        Back_Button->setStyleSheet(QString::fromUtf8("border-image: url(:/Images/Imagefiles/blackbutton.png);"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(60, 109, 131, 111));
        widget->setStyleSheet(QString::fromUtf8("border-image: url(:/Images/Imagefiles/uteplogo.jpeg);"));
        widget_2 = new QWidget(centralwidget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(60, 229, 131, 171));
        widget_2->setStyleSheet(QString::fromUtf8("border-image: url(:/Images/Imagefiles/afc.jpeg);"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 28));
        menubar->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        menuNavigation = new QMenu(menubar);
        menuNavigation->setObjectName(QString::fromUtf8("menuNavigation"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuNavigation->menuAction());
        menuNavigation->addAction(Menu_main);
        menuNavigation->addAction(Menu_tutorial);
        menuNavigation->addAction(Menu_videos);
        menuNavigation->addAction(Menu_attacks);
        menuNavigation->addAction(Menu_counter);
        menuNavigation->addAction(Menu_exit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        Menu_main->setText(QApplication::translate("MainWindow", "Main Hub", nullptr));
        Menu_tutorial->setText(QApplication::translate("MainWindow", "Tutorial Menu", nullptr));
        Menu_videos->setText(QApplication::translate("MainWindow", "Videos", nullptr));
        Menu_attacks->setText(QApplication::translate("MainWindow", "Attacks", nullptr));
        Menu_counter->setText(QApplication::translate("MainWindow", "Counter Measures", nullptr));
        Menu_exit->setText(QApplication::translate("MainWindow", "Exit", nullptr));
        label->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:26pt; font-weight:600; color:#000000;\">Vulnerabilities</span></p></body></html>", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" color:#ffffff;\">Hackers will try to attack these three </span></p><p align=\"center\"><span style=\" color:#ffffff;\">pillars of data security in order</span></p><p align=\"center\"><span style=\" color:#ffffff;\"> to disrupt the a system and flow</span></p><p align=\"center\"><span style=\" color:#ffffff;\">of data to authorized users</span></p></body></html>", nullptr));
        Integrity_Button->setText(QApplication::translate("MainWindow", "Integrity", nullptr));
        Confidentiality_Button->setText(QApplication::translate("MainWindow", "Confidentiality", nullptr));
        Availability_Button->setText(QApplication::translate("MainWindow", "Availability", nullptr));
        Back_Button->setText(QApplication::translate("MainWindow", "Back", nullptr));
        menuNavigation->setTitle(QApplication::translate("MainWindow", "Navigation", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Vulnerabilities: public Ui_Vulnerabilities {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VULNERABILITIES_H
