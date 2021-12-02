/********************************************************************************
** Form generated from reading UI file 'eegmain.ui'
**
** Created by: Qt User Interface Compiler version 6.1.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EEGMAIN_H
#define UI_EEGMAIN_H

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

class Ui_EEGMain
{
public:
    QWidget *centralwidget;
    QCustomPlot *plot1;
    QLabel *label_4;
    QPlainTextEdit *plainTextEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *EEGMain)
    {
        if (EEGMain->objectName().isEmpty())
            EEGMain->setObjectName(QString::fromUtf8("EEGMain"));
        EEGMain->resize(800, 600);
        centralwidget = new QWidget(EEGMain);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        plot1 = new QCustomPlot(centralwidget);
        plot1->setObjectName(QString::fromUtf8("plot1"));
        plot1->setGeometry(QRect(109, 49, 581, 271));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(340, 10, 91, 16));
        label_4->setTextFormat(Qt::AutoText);
        plainTextEdit = new QPlainTextEdit(centralwidget);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(110, 350, 581, 71));
        EEGMain->setCentralWidget(centralwidget);
        menubar = new QMenuBar(EEGMain);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        EEGMain->setMenuBar(menubar);
        statusbar = new QStatusBar(EEGMain);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        EEGMain->setStatusBar(statusbar);

        retranslateUi(EEGMain);

        QMetaObject::connectSlotsByName(EEGMain);
    } // setupUi

    void retranslateUi(QMainWindow *EEGMain)
    {
        EEGMain->setWindowTitle(QCoreApplication::translate("EEGMain", "MainWindow", nullptr));
        label_4->setText(QCoreApplication::translate("EEGMain", "<html><head/><body><p><span style=\" font-weight:792; font-style:italic;\">EEG Graph</span></p></body></html>", nullptr));
        plainTextEdit->setPlainText(QCoreApplication::translate("EEGMain", "The electroencephalogram (EEG) is a recording of the electrical activity of the brain from the scalp. The recorded waveforms reflect the cortical electrical activity.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EEGMain: public Ui_EEGMain {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EEGMAIN_H
