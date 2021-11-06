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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Attacker
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Attacker)
    {
        if (Attacker->objectName().isEmpty())
            Attacker->setObjectName(QString::fromUtf8("Attacker"));
        Attacker->resize(800, 600);
        menubar = new QMenuBar(Attacker);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        Attacker->setMenuBar(menubar);
        centralwidget = new QWidget(Attacker);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Attacker->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(Attacker);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Attacker->setStatusBar(statusbar);

        retranslateUi(Attacker);

        QMetaObject::connectSlotsByName(Attacker);
    } // setupUi

    void retranslateUi(QMainWindow *Attacker)
    {
        Attacker->setWindowTitle(QCoreApplication::translate("Attacker", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Attacker: public Ui_Attacker {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ATTACKERMAIN_H
