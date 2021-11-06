/********************************************************************************
** Form generated from reading UI file 'networkmain.ui'
**
** Created by: Qt User Interface Compiler version 6.1.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NETWORKMAIN_H
#define UI_NETWORKMAIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NetworkMain
{
public:
    QWidget *centralwidget;
    QTableWidget *tableWidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *NetworkMain)
    {
        if (NetworkMain->objectName().isEmpty())
            NetworkMain->setObjectName(QString::fromUtf8("NetworkMain"));
        NetworkMain->resize(800, 600);
        centralwidget = new QWidget(NetworkMain);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tableWidget = new QTableWidget(centralwidget);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(90, 40, 441, 241));
        NetworkMain->setCentralWidget(centralwidget);
        menubar = new QMenuBar(NetworkMain);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        NetworkMain->setMenuBar(menubar);
        statusbar = new QStatusBar(NetworkMain);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        NetworkMain->setStatusBar(statusbar);

        retranslateUi(NetworkMain);

        QMetaObject::connectSlotsByName(NetworkMain);
    } // setupUi

    void retranslateUi(QMainWindow *NetworkMain)
    {
        NetworkMain->setWindowTitle(QCoreApplication::translate("NetworkMain", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NetworkMain: public Ui_NetworkMain {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NETWORKMAIN_H
