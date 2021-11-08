/********************************************************************************
** Form generated from reading UI file 'whatis.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WHATIS_H
#define UI_WHATIS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Whatis
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QPushButton *Next_Button;
    QPushButton *Back_Button;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 127);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(150, 0, 481, 121));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 0);"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 140, 751, 321));
        Next_Button = new QPushButton(centralwidget);
        Next_Button->setObjectName(QString::fromUtf8("Next_Button"));
        Next_Button->setGeometry(QRect(490, 490, 99, 30));
        Back_Button = new QPushButton(centralwidget);
        Back_Button->setObjectName(QString::fromUtf8("Back_Button"));
        Back_Button->setGeometry(QRect(170, 490, 99, 30));
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
        label->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:26pt; font-weight:600; color:#ffffff;\">What is DDoS? </span></p><p align=\"center\"><span style=\" font-size:26pt; font-weight:600; color:#ffffff;\">(Distributed Denial of Service)</span></p></body></html>", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt; color:#ffffff;\">A Distrubuted Denial of Service attack is an attempt by multiple </span></p><p align=\"center\"><span style=\" font-size:18pt; color:#ffffff;\">machines to overwhelm bandwidth or specific resources of a system. </span></p><p align=\"center\"><span style=\" font-size:18pt; color:#ffffff;\">The goal of the attack is to deny access to legitimate users due to</span></p><p align=\"center\"><span style=\" font-size:18pt; color:#ffffff;\">resources being completely taken up by the attacking machines. </span></p><p align=\"center\"><span style=\" font-size:18pt; color:#ffffff;\">Most attacks use large scale bot-nets (a group of machines affected by Malware)</span></p><p align=\"center\"><span style=\" font-size:18pt; color:#ffffff;\">in order to flood the targeted system with a large number of requests.</span></p></body></html>", nullptr));
        Next_Button->setText(QApplication::translate("MainWindow", "Next", nullptr));
        Back_Button->setText(QApplication::translate("MainWindow", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Whatis: public Ui_Whatis {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WHATIS_H
