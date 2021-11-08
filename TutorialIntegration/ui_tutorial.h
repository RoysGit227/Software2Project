/********************************************************************************
** Form generated from reading UI file 'tutorial.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TUTORIAL_H
#define UI_TUTORIAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Tutorial
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
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *DDoS_Button;
    QLabel *label_5;
    QLabel *label_4;
    QLabel *label_3;
    QLabel *label_2;
    QPushButton *Vulnerability_Button;
    QPushButton *Malware_Button;
    QPushButton *Countermeasure_Button;
    QPushButton *Back_Button;
    QMenuBar *menubar;
    QMenu *menuMain_Hub;
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
        label->setGeometry(QRect(240, 10, 341, 101));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 0);"));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(110, 150, 584, 231));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        DDoS_Button = new QPushButton(gridLayoutWidget);
        DDoS_Button->setObjectName(QString::fromUtf8("DDoS_Button"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        DDoS_Button->setFont(font);
        DDoS_Button->setStyleSheet(QString::fromUtf8("border-image: url(:/Images/Imagefiles/orangebutton.png);"));

        gridLayout->addWidget(DDoS_Button, 3, 0, 1, 1);

        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setStyleSheet(QString::fromUtf8("background-color: rgb(54, 93, 52);"));

        gridLayout->addWidget(label_5, 4, 1, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setStyleSheet(QString::fromUtf8("background-color: rgb(54, 93, 52);"));

        gridLayout->addWidget(label_4, 3, 1, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(54, 93, 52);"));

        gridLayout->addWidget(label_3, 2, 1, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(54, 93, 52);"));

        gridLayout->addWidget(label_2, 1, 1, 1, 1);

        Vulnerability_Button = new QPushButton(gridLayoutWidget);
        Vulnerability_Button->setObjectName(QString::fromUtf8("Vulnerability_Button"));
        Vulnerability_Button->setFont(font);
        Vulnerability_Button->setStyleSheet(QString::fromUtf8("border-image: url(:/Images/Imagefiles/orangebutton.png);"));

        gridLayout->addWidget(Vulnerability_Button, 1, 0, 1, 1);

        Malware_Button = new QPushButton(gridLayoutWidget);
        Malware_Button->setObjectName(QString::fromUtf8("Malware_Button"));
        Malware_Button->setFont(font);
        Malware_Button->setStyleSheet(QString::fromUtf8("border-image: url(:/Images/Imagefiles/orangebutton.png);"));

        gridLayout->addWidget(Malware_Button, 2, 0, 1, 1);

        Countermeasure_Button = new QPushButton(gridLayoutWidget);
        Countermeasure_Button->setObjectName(QString::fromUtf8("Countermeasure_Button"));
        Countermeasure_Button->setFont(font);
        Countermeasure_Button->setStyleSheet(QString::fromUtf8("border-image: url(:/Images/Imagefiles/orangebutton.png);"));

        gridLayout->addWidget(Countermeasure_Button, 4, 0, 1, 1);

        Back_Button = new QPushButton(centralwidget);
        Back_Button->setObjectName(QString::fromUtf8("Back_Button"));
        Back_Button->setGeometry(QRect(370, 390, 99, 30));
        Back_Button->setFont(font);
        Back_Button->setStyleSheet(QString::fromUtf8("border-image: url(:/Images/Imagefiles/blackbutton.png);"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 28));
        menubar->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        menuMain_Hub = new QMenu(menubar);
        menuMain_Hub->setObjectName(QString::fromUtf8("menuMain_Hub"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuMain_Hub->menuAction());
        menuMain_Hub->addAction(Menu_main);
        menuMain_Hub->addAction(Menu_tutorial);
        menuMain_Hub->addAction(Menu_videos);
        menuMain_Hub->addAction(Menu_attacks);
        menuMain_Hub->addAction(Menu_counter);
        menuMain_Hub->addAction(Menu_exit);

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
        Menu_counter->setText(QApplication::translate("MainWindow", "CounterMeasures", nullptr));
        Menu_exit->setText(QApplication::translate("MainWindow", "Exit", nullptr));
        label->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:26pt; font-weight:600;\">Tutorial Menu</span></p></body></html>", nullptr));
        DDoS_Button->setText(QApplication::translate("MainWindow", "DDoS", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" color:#ffffff;\">How to protect a system</span></p></body></html>", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" color:#ffffff;\">Distributed Denial of Service</span></p></body></html>", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" color:#ffffff;\">Malicioius Software</span></p></body></html>", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" color:#ffffff;\">Three vulnerabilites of a system. Integrity, Confidentiality</span></p><p align=\"center\"><span style=\" color:#ffffff;\">and Availibility</span></p></body></html>", nullptr));
        Vulnerability_Button->setText(QApplication::translate("MainWindow", "Vulnerablities", nullptr));
        Malware_Button->setText(QApplication::translate("MainWindow", "Malware", nullptr));
        Countermeasure_Button->setText(QApplication::translate("MainWindow", "Counter Measures", nullptr));
        Back_Button->setText(QApplication::translate("MainWindow", "Back", nullptr));
        menuMain_Hub->setTitle(QApplication::translate("MainWindow", "Navigation", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Tutorial: public Ui_Tutorial {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TUTORIAL_H
