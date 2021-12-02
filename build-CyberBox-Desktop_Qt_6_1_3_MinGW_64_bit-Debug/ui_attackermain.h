/********************************************************************************
** Form generated from reading UI file 'attackermain.ui'
**
** Created by: Qt User Interface Compiler version 6.1.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ATTACKERMAIN_H
#define UI_ATTACKERMAIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Attacker
{
public:
    QWidget *centralwidget;
    QPushButton *addDevButton;
    QPushButton *removeDevButton;
    QLineEdit *devNameLine;
    QSpinBox *dev_spinBox;
    QLabel *label_2;
    QPushButton *spO2Button;
    QPushButton *addDevButton_2;
    QPushButton *addDevButton_3;
    QLineEdit *fileNameLine;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Attacker)
    {
        if (Attacker->objectName().isEmpty())
            Attacker->setObjectName(QString::fromUtf8("Attacker"));
        Attacker->resize(800, 600);
        Attacker->setAutoFillBackground(false);
        centralwidget = new QWidget(Attacker);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        addDevButton = new QPushButton(centralwidget);
        addDevButton->setObjectName(QString::fromUtf8("addDevButton"));
        addDevButton->setGeometry(QRect(40, 30, 121, 22));
        removeDevButton = new QPushButton(centralwidget);
        removeDevButton->setObjectName(QString::fromUtf8("removeDevButton"));
        removeDevButton->setGeometry(QRect(40, 70, 121, 22));
        devNameLine = new QLineEdit(centralwidget);
        devNameLine->setObjectName(QString::fromUtf8("devNameLine"));
        devNameLine->setGeometry(QRect(200, 30, 121, 21));
        dev_spinBox = new QSpinBox(centralwidget);
        dev_spinBox->setObjectName(QString::fromUtf8("dev_spinBox"));
        dev_spinBox->setGeometry(QRect(280, 70, 42, 22));
        dev_spinBox->setMinimum(2);
        dev_spinBox->setMaximum(24);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(200, 70, 81, 16));
        spO2Button = new QPushButton(centralwidget);
        spO2Button->setObjectName(QString::fromUtf8("spO2Button"));
        spO2Button->setGeometry(QRect(40, 150, 121, 22));
        addDevButton_2 = new QPushButton(centralwidget);
        addDevButton_2->setObjectName(QString::fromUtf8("addDevButton_2"));
        addDevButton_2->setGeometry(QRect(40, 110, 121, 22));
        addDevButton_3 = new QPushButton(centralwidget);
        addDevButton_3->setObjectName(QString::fromUtf8("addDevButton_3"));
        addDevButton_3->setGeometry(QRect(200, 110, 121, 22));
        fileNameLine = new QLineEdit(centralwidget);
        fileNameLine->setObjectName(QString::fromUtf8("fileNameLine"));
        fileNameLine->setGeometry(QRect(200, 150, 121, 21));
        Attacker->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Attacker);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        Attacker->setMenuBar(menubar);
        statusbar = new QStatusBar(Attacker);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Attacker->setStatusBar(statusbar);

        retranslateUi(Attacker);

        QMetaObject::connectSlotsByName(Attacker);
    } // setupUi

    void retranslateUi(QMainWindow *Attacker)
    {
        Attacker->setWindowTitle(QCoreApplication::translate("Attacker", "MainWindow", nullptr));
        addDevButton->setText(QCoreApplication::translate("Attacker", "Add Zombie Pi", nullptr));
        removeDevButton->setText(QCoreApplication::translate("Attacker", "Remove Zombie Pi", nullptr));
        label_2->setText(QCoreApplication::translate("Attacker", "Device Index:", nullptr));
        spO2Button->setText(QCoreApplication::translate("Attacker", "Switch spO2", nullptr));
        addDevButton_2->setText(QCoreApplication::translate("Attacker", "Automatic Add", nullptr));
        addDevButton_3->setText(QCoreApplication::translate("Attacker", "Fork Bomb Network", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Attacker: public Ui_Attacker {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ATTACKERMAIN_H
