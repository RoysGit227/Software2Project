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
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>
#include <qcustomplot.h>

QT_BEGIN_NAMESPACE

class Ui_ECGMain
{
public:
    QWidget *centralwidget;
    QLabel *label_4;
    QCustomPlot *plot1;
    QPlainTextEdit *plainTextEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ECGMain)
    {
        if (ECGMain->objectName().isEmpty())
            ECGMain->setObjectName(QString::fromUtf8("ECGMain"));
        ECGMain->resize(800, 600);
        centralwidget = new QWidget(ECGMain);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(331, 11, 91, 16));
        label_4->setTextFormat(Qt::AutoText);
        plot1 = new QCustomPlot(centralwidget);
        plot1->setObjectName(QString::fromUtf8("plot1"));
        plot1->setGeometry(QRect(100, 50, 581, 271));
        plainTextEdit = new QPlainTextEdit(centralwidget);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(80, 350, 581, 81));
        ECGMain->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ECGMain);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        ECGMain->setMenuBar(menubar);
        statusbar = new QStatusBar(ECGMain);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        ECGMain->setStatusBar(statusbar);

        retranslateUi(ECGMain);

        QMetaObject::connectSlotsByName(ECGMain);
    } // setupUi

    void retranslateUi(QMainWindow *ECGMain)
    {
        ECGMain->setWindowTitle(QCoreApplication::translate("ECGMain", "MainWindow", nullptr));
        label_4->setText(QCoreApplication::translate("ECGMain", "<html><head/><body><p><span style=\" font-weight:792; font-style:italic;\">ECG Graph</span></p></body></html>", nullptr));
        plainTextEdit->setPlainText(QCoreApplication::translate("ECGMain", "An ECG signal tracks heart rhythm and many cardiac diseases, such as poor blood flow to the heart and structural abnormalities. The action potential created by contractions of the heart wall spreads electrical currents from the heart throughout the body.\n"
"", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ECGMain: public Ui_ECGMain {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ECGMAIN_H
