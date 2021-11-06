/********************************************************************************
** Form generated from reading UI file 'ecgmain.ui'
**
** Created by: Qt User Interface Compiler version 6.1.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ECGMAIN_H
#define UI_ECGMAIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ECGMain
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ECGMain)
    {
        if (ECGMain->objectName().isEmpty())
            ECGMain->setObjectName(QString::fromUtf8("ECGMain"));
        ECGMain->resize(800, 600);
        menubar = new QMenuBar(ECGMain);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        ECGMain->setMenuBar(menubar);
        centralwidget = new QWidget(ECGMain);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        ECGMain->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(ECGMain);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        ECGMain->setStatusBar(statusbar);

        retranslateUi(ECGMain);

        QMetaObject::connectSlotsByName(ECGMain);
    } // setupUi

    void retranslateUi(QMainWindow *ECGMain)
    {
        ECGMain->setWindowTitle(QCoreApplication::translate("ECGMain", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ECGMain: public Ui_ECGMain {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ECGMAIN_H
