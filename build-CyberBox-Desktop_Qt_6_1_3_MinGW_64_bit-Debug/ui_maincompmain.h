/********************************************************************************
** Form generated from reading UI file 'maincompmain.ui'
**
** Created by: Qt User Interface Compiler version 6.1.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINCOMPMAIN_H
#define UI_MAINCOMPMAIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainCompMain
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainCompMain)
    {
        if (MainCompMain->objectName().isEmpty())
            MainCompMain->setObjectName(QString::fromUtf8("MainCompMain"));
        MainCompMain->resize(800, 600);
        centralwidget = new QWidget(MainCompMain);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        MainCompMain->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainCompMain);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainCompMain->setMenuBar(menubar);
        statusbar = new QStatusBar(MainCompMain);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainCompMain->setStatusBar(statusbar);

        retranslateUi(MainCompMain);

        QMetaObject::connectSlotsByName(MainCompMain);
    } // setupUi

    void retranslateUi(QMainWindow *MainCompMain)
    {
        MainCompMain->setWindowTitle(QCoreApplication::translate("MainCompMain", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainCompMain: public Ui_MainCompMain {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINCOMPMAIN_H
