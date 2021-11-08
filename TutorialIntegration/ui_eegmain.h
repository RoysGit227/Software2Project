/********************************************************************************
** Form generated from reading UI file 'eegmain.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EEGMAIN_H
#define UI_EEGMAIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EEGMain
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *EEGMain)
    {
        if (EEGMain->objectName().isEmpty())
            EEGMain->setObjectName(QString::fromUtf8("EEGMain"));
        EEGMain->resize(800, 600);
        menubar = new QMenuBar(EEGMain);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        EEGMain->setMenuBar(menubar);
        centralwidget = new QWidget(EEGMain);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        EEGMain->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(EEGMain);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        EEGMain->setStatusBar(statusbar);

        retranslateUi(EEGMain);

        QMetaObject::connectSlotsByName(EEGMain);
    } // setupUi

    void retranslateUi(QMainWindow *EEGMain)
    {
        EEGMain->setWindowTitle(QApplication::translate("EEGMain", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EEGMain: public Ui_EEGMain {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EEGMAIN_H
