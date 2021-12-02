/********************************************************************************
** Form generated from reading UI file 'cyberbox.ui'
**
** Created by: Qt User Interface Compiler version 6.1.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CYBERBOX_H
#define UI_CYBERBOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CyberBox
{
public:
    QWidget *centralwidget;
    QLabel *labelAttacker;
    QLabel *labelSN1;
    QLabel *labelSN2;
    QLabel *labelSN3;
    QLabel *labelBIT1;
    QLabel *labelBIT2;
    QLabel *labelBIT3;
    QLabel *labelMain;
    QPushButton *pushButtonAttacker;
    QPushButton *pushButtonNetwork;
    QPushButton *pushButtonMain;
    QPushButton *pushButtonECG;
    QPushButton *pushButtonEEG;
    QPushButton *pushButtonSpO2;
    QLabel *labelSwitch;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *CyberBox)
    {
        if (CyberBox->objectName().isEmpty())
            CyberBox->setObjectName(QString::fromUtf8("CyberBox"));
        CyberBox->resize(800, 600);
        centralwidget = new QWidget(CyberBox);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        labelAttacker = new QLabel(centralwidget);
        labelAttacker->setObjectName(QString::fromUtf8("labelAttacker"));
        labelAttacker->setGeometry(QRect(100, 20, 201, 131));
        labelSN1 = new QLabel(centralwidget);
        labelSN1->setObjectName(QString::fromUtf8("labelSN1"));
        labelSN1->setGeometry(QRect(100, 330, 121, 91));
        labelSN2 = new QLabel(centralwidget);
        labelSN2->setObjectName(QString::fromUtf8("labelSN2"));
        labelSN2->setGeometry(QRect(330, 330, 121, 91));
        labelSN3 = new QLabel(centralwidget);
        labelSN3->setObjectName(QString::fromUtf8("labelSN3"));
        labelSN3->setGeometry(QRect(580, 330, 121, 91));
        labelBIT1 = new QLabel(centralwidget);
        labelBIT1->setObjectName(QString::fromUtf8("labelBIT1"));
        labelBIT1->setGeometry(QRect(100, 470, 121, 91));
        labelBIT2 = new QLabel(centralwidget);
        labelBIT2->setObjectName(QString::fromUtf8("labelBIT2"));
        labelBIT2->setGeometry(QRect(330, 470, 121, 91));
        labelBIT3 = new QLabel(centralwidget);
        labelBIT3->setObjectName(QString::fromUtf8("labelBIT3"));
        labelBIT3->setGeometry(QRect(580, 470, 121, 91));
        labelMain = new QLabel(centralwidget);
        labelMain->setObjectName(QString::fromUtf8("labelMain"));
        labelMain->setGeometry(QRect(470, 20, 201, 131));
        pushButtonAttacker = new QPushButton(centralwidget);
        pushButtonAttacker->setObjectName(QString::fromUtf8("pushButtonAttacker"));
        pushButtonAttacker->setGeometry(QRect(140, 160, 113, 32));
        pushButtonNetwork = new QPushButton(centralwidget);
        pushButtonNetwork->setObjectName(QString::fromUtf8("pushButtonNetwork"));
        pushButtonNetwork->setGeometry(QRect(330, 280, 141, 32));
        pushButtonMain = new QPushButton(centralwidget);
        pushButtonMain->setObjectName(QString::fromUtf8("pushButtonMain"));
        pushButtonMain->setGeometry(QRect(520, 160, 113, 32));
        pushButtonECG = new QPushButton(centralwidget);
        pushButtonECG->setObjectName(QString::fromUtf8("pushButtonECG"));
        pushButtonECG->setGeometry(QRect(100, 430, 113, 32));
        pushButtonEEG = new QPushButton(centralwidget);
        pushButtonEEG->setObjectName(QString::fromUtf8("pushButtonEEG"));
        pushButtonEEG->setGeometry(QRect(330, 430, 113, 32));
        pushButtonSpO2 = new QPushButton(centralwidget);
        pushButtonSpO2->setObjectName(QString::fromUtf8("pushButtonSpO2"));
        pushButtonSpO2->setGeometry(QRect(580, 430, 113, 32));
        labelSwitch = new QLabel(centralwidget);
        labelSwitch->setObjectName(QString::fromUtf8("labelSwitch"));
        labelSwitch->setGeometry(QRect(340, 170, 121, 91));
        CyberBox->setCentralWidget(centralwidget);
        menubar = new QMenuBar(CyberBox);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        CyberBox->setMenuBar(menubar);
        statusbar = new QStatusBar(CyberBox);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        CyberBox->setStatusBar(statusbar);

        retranslateUi(CyberBox);

        QMetaObject::connectSlotsByName(CyberBox);
    } // setupUi

    void retranslateUi(QMainWindow *CyberBox)
    {
        CyberBox->setWindowTitle(QCoreApplication::translate("CyberBox", "CyberBox", nullptr));
        labelAttacker->setText(QString());
        labelSN1->setText(QString());
        labelSN2->setText(QString());
        labelSN3->setText(QString());
        labelBIT1->setText(QString());
        labelBIT2->setText(QString());
        labelBIT3->setText(QString());
        labelMain->setText(QString());
        pushButtonAttacker->setText(QCoreApplication::translate("CyberBox", "ATTACKER", nullptr));
        pushButtonNetwork->setText(QCoreApplication::translate("CyberBox", "NETWORK", nullptr));
        pushButtonMain->setText(QCoreApplication::translate("CyberBox", "MAIN", nullptr));
        pushButtonECG->setText(QCoreApplication::translate("CyberBox", "ECG", nullptr));
        pushButtonEEG->setText(QCoreApplication::translate("CyberBox", "EEG", nullptr));
        pushButtonSpO2->setText(QCoreApplication::translate("CyberBox", "SpO2", nullptr));
        labelSwitch->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CyberBox: public Ui_CyberBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CYBERBOX_H
