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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NetworkMain
{
public:
    QWidget *centralwidget;
    QTableWidget *tableWidget;
    QPushButton *addDevButton;
    QPushButton *removeDevButton;
    QLineEdit *devNameLine;
    QSpinBox *dev_spinBox;
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
        addDevButton = new QPushButton(centralwidget);
        addDevButton->setObjectName(QString::fromUtf8("addDevButton"));
        addDevButton->setGeometry(QRect(90, 310, 80, 22));
        removeDevButton = new QPushButton(centralwidget);
        removeDevButton->setObjectName(QString::fromUtf8("removeDevButton"));
        removeDevButton->setGeometry(QRect(90, 350, 80, 22));
        devNameLine = new QLineEdit(centralwidget);
        devNameLine->setObjectName(QString::fromUtf8("devNameLine"));
        devNameLine->setGeometry(QRect(200, 310, 113, 21));
        dev_spinBox = new QSpinBox(centralwidget);
        dev_spinBox->setObjectName(QString::fromUtf8("dev_spinBox"));
        dev_spinBox->setGeometry(QRect(200, 350, 42, 22));
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
        addDevButton->setText(QCoreApplication::translate("NetworkMain", "Add", nullptr));
        removeDevButton->setText(QCoreApplication::translate("NetworkMain", "Remove", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NetworkMain: public Ui_NetworkMain {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NETWORKMAIN_H
