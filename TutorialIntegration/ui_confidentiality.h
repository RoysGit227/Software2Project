/********************************************************************************
** Form generated from reading UI file 'confidentiality.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIDENTIALITY_H
#define UI_CONFIDENTIALITY_H

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

class Ui_Confidentiality
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
    QPushButton *Back_Button;
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
        label->setGeometry(QRect(240, 30, 341, 101));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 0);"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(130, 150, 551, 201));
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(93, 103, 27);"));
        Back_Button = new QPushButton(centralwidget);
        Back_Button->setObjectName(QString::fromUtf8("Back_Button"));
        Back_Button->setGeometry(QRect(360, 370, 99, 30));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        Back_Button->setFont(font);
        Back_Button->setStyleSheet(QString::fromUtf8("border-image: url(:/Images/Imagefiles/orangebutton.png);"));
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
        label->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:28pt; font-weight:600;\">Confidentiality</span></p></body></html>", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" color:#ffffff;\">Confidentiality refers to the security and access to data. When confidentiality </span></p><p align=\"center\"><span style=\" color:#ffffff;\">is comprimised unauthorized users can get access to private information </span></p><p align=\"center\"><span style=\" color:#ffffff;\">and sensitive data. In order maintain confidentiality a system could have</span></p><p align=\"center\"><span style=\" font-weight:600; color:#ffffff;\">- </span><span style=\" color:#ffffff;\">Hard Passwords/Phrases</span></p><p align=\"center\"><span style=\" font-weight:600; color:#ffffff;\">- </span><span style=\" color:#ffffff;\">Two Factor Authorization</span></p><p align=\"center\"><span style=\" font-weight:600; color:#ffffff;\">- </span><span style=\" color:#ffffff;\">Biometric Verification</span></p></body></html>", nullptr));
        Back_Button->setText(QApplication::translate("MainWindow", "Back", nullptr));
        menuNavigation->setTitle(QApplication::translate("MainWindow", "Navigation", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Confidentiality: public Ui_Confidentiality {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIDENTIALITY_H
