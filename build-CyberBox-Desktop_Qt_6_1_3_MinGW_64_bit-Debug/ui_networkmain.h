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
    QTableWidget *tableWidget;
    QPushButton *addDevButton;
    QPushButton *removeDevButton;
    QLineEdit *devNameLine;
    QSpinBox *dev_spinBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *errorLabel;
    QCustomPlot *plot;
    QLabel *label_4;
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
        tableWidget = new QTableWidget(centralwidget);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(20, 40, 221, 221));
        tableWidget->setFrameShape(QFrame::StyledPanel);
        tableWidget->setFrameShadow(QFrame::Plain);
        addDevButton = new QPushButton(centralwidget);
        addDevButton->setObjectName(QString::fromUtf8("addDevButton"));
        addDevButton->setGeometry(QRect(20, 310, 80, 22));
        removeDevButton = new QPushButton(centralwidget);
        removeDevButton->setObjectName(QString::fromUtf8("removeDevButton"));
        removeDevButton->setGeometry(QRect(20, 350, 80, 22));
        devNameLine = new QLineEdit(centralwidget);
        devNameLine->setObjectName(QString::fromUtf8("devNameLine"));
        devNameLine->setGeometry(QRect(190, 310, 113, 21));
        dev_spinBox = new QSpinBox(centralwidget);
        dev_spinBox->setObjectName(QString::fromUtf8("dev_spinBox"));
        dev_spinBox->setGeometry(QRect(190, 350, 42, 22));
        dev_spinBox->setMinimum(2);
        dev_spinBox->setMaximum(24);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(110, 310, 71, 16));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(110, 350, 71, 16));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(80, 10, 91, 16));
        label_3->setTextFormat(Qt::AutoText);
        errorLabel = new QLabel(centralwidget);
        errorLabel->setObjectName(QString::fromUtf8("errorLabel"));
        errorLabel->setGeometry(QRect(60, 270, 171, 20));
        plot = new QCustomPlot(centralwidget);
        plot->setObjectName(QString::fromUtf8("plot"));
        plot->setGeometry(QRect(300, 40, 491, 221));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(510, 10, 91, 16));
        label_4->setTextFormat(Qt::AutoText);
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
        label->setText(QCoreApplication::translate("NetworkMain", "Device Name: ", nullptr));
        label_2->setText(QCoreApplication::translate("NetworkMain", "Device Index:", nullptr));
        label_3->setText(QCoreApplication::translate("NetworkMain", "<html><head/><body><p><span style=\" font-weight:800; font-style:italic;\">IPv4 TABLE</span></p></body></html>", nullptr));
        errorLabel->setText(QCoreApplication::translate("NetworkMain", "Error: Unable to Connect", nullptr));
        label_4->setText(QCoreApplication::translate("NetworkMain", "<html><head/><body><p><span style=\" font-weight:792; font-style:italic;\">Usage Graph</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NetworkMain: public Ui_NetworkMain {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NETWORKMAIN_H
