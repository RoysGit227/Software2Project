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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>
#include <qcustomplot.h>

QT_BEGIN_NAMESPACE

class Ui_NetworkMain
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QCustomPlot *plot;
    QPushButton *addDevButton;
    QPushButton *removeDevButton;
    QLabel *label_2;
    QLabel *errorLabel;
    QLabel *label_3;
    QLabel *label;
    QLabel *label_4;
    QSpinBox *dev_spinBox;
    QLineEdit *devNameLine;
    QTableWidget *tableWidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *NetworkMain)
    {
        if (NetworkMain->objectName().isEmpty())
            NetworkMain->setObjectName(QString::fromUtf8("NetworkMain"));
        NetworkMain->resize(800, 600);
        NetworkMain->setAutoFillBackground(false);
        centralwidget = new QWidget(NetworkMain);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(0, 10, 801, 541));
        plot = new QCustomPlot(groupBox);
        plot->setObjectName(QString::fromUtf8("plot"));
        plot->setGeometry(QRect(290, 30, 491, 221));
        addDevButton = new QPushButton(groupBox);
        addDevButton->setObjectName(QString::fromUtf8("addDevButton"));
        addDevButton->setGeometry(QRect(10, 300, 80, 22));
        removeDevButton = new QPushButton(groupBox);
        removeDevButton->setObjectName(QString::fromUtf8("removeDevButton"));
        removeDevButton->setGeometry(QRect(10, 340, 80, 22));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(100, 340, 71, 16));
        errorLabel = new QLabel(groupBox);
        errorLabel->setObjectName(QString::fromUtf8("errorLabel"));
        errorLabel->setGeometry(QRect(50, 260, 171, 20));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(70, 0, 91, 16));
        label_3->setTextFormat(Qt::AutoText);
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(100, 300, 71, 16));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(460, 0, 181, 16));
        label_4->setTextFormat(Qt::AutoText);
        dev_spinBox = new QSpinBox(groupBox);
        dev_spinBox->setObjectName(QString::fromUtf8("dev_spinBox"));
        dev_spinBox->setGeometry(QRect(180, 340, 42, 22));
        dev_spinBox->setMinimum(2);
        dev_spinBox->setMaximum(24);
        devNameLine = new QLineEdit(groupBox);
        devNameLine->setObjectName(QString::fromUtf8("devNameLine"));
        devNameLine->setGeometry(QRect(180, 300, 113, 21));
        tableWidget = new QTableWidget(groupBox);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(10, 30, 221, 221));
        tableWidget->setFrameShape(QFrame::StyledPanel);
        tableWidget->setFrameShadow(QFrame::Plain);
        NetworkMain->setCentralWidget(centralwidget);
        menubar = new QMenuBar(NetworkMain);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
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
        groupBox->setTitle(QCoreApplication::translate("NetworkMain", "GroupBox", nullptr));
        addDevButton->setText(QCoreApplication::translate("NetworkMain", "Add", nullptr));
        removeDevButton->setText(QCoreApplication::translate("NetworkMain", "Remove", nullptr));
        label_2->setText(QCoreApplication::translate("NetworkMain", "Device Index:", nullptr));
        errorLabel->setText(QCoreApplication::translate("NetworkMain", "Error: Unable to Connect", nullptr));
        label_3->setText(QCoreApplication::translate("NetworkMain", "<html><head/><body><p><span style=\" font-weight:800; font-style:italic;\">IPv4 TABLE</span></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("NetworkMain", "Device Name: ", nullptr));
        label_4->setText(QCoreApplication::translate("NetworkMain", "<html><head/><body><p><span style=\" font-weight:792; font-style:italic;\">Network Utilization Graph</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NetworkMain: public Ui_NetworkMain {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NETWORKMAIN_H
