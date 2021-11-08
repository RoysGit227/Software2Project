/********************************************************************************
** Form generated from reading UI file 'home.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOME_H
#define UI_HOME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Home
{
public:
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QPushButton *Tutorial_Button;
    QPushButton *Videos_Button;
    QPushButton *Attacks_Button;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QWidget *widget;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QWidget *widget_2;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Home)
    {
        if (Home->objectName().isEmpty())
            Home->setObjectName(QString::fromUtf8("Home"));
        Home->resize(800, 480);
        Home->setCursor(QCursor(Qt::ArrowCursor));
        Home->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 127);"));
        centralwidget = new QWidget(Home);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8(""));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(180, 40, 451, 121));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(97, 107, 32);"));

        verticalLayout->addWidget(label);

        verticalLayoutWidget_2 = new QWidget(centralwidget);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(330, 200, 161, 211));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        Tutorial_Button = new QPushButton(verticalLayoutWidget_2);
        Tutorial_Button->setObjectName(QString::fromUtf8("Tutorial_Button"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        Tutorial_Button->setFont(font);
        Tutorial_Button->setStyleSheet(QString::fromUtf8("border-image: url(:/Images/Imagefiles/orangebutton.png);"));

        verticalLayout_2->addWidget(Tutorial_Button);

        Videos_Button = new QPushButton(verticalLayoutWidget_2);
        Videos_Button->setObjectName(QString::fromUtf8("Videos_Button"));
        Videos_Button->setFont(font);
        Videos_Button->setStyleSheet(QString::fromUtf8("border-image: url(:/Images/Imagefiles/orangebutton.png);"));

        verticalLayout_2->addWidget(Videos_Button);

        Attacks_Button = new QPushButton(verticalLayoutWidget_2);
        Attacks_Button->setObjectName(QString::fromUtf8("Attacks_Button"));
        Attacks_Button->setFont(font);
        Attacks_Button->setStyleSheet(QString::fromUtf8("border-image: url(:/Images/Imagefiles/orangebutton.png);"));

        verticalLayout_2->addWidget(Attacks_Button);

        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(120, 210, 171, 171));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(horizontalLayoutWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setStyleSheet(QString::fromUtf8("border-image: url(:/Images/Imagefiles/uteplogo.jpeg);"));

        horizontalLayout->addWidget(widget);

        horizontalLayoutWidget_2 = new QWidget(centralwidget);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(529, 199, 181, 191));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        widget_2 = new QWidget(horizontalLayoutWidget_2);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setStyleSheet(QString::fromUtf8("border-image: url(:/Images/Imagefiles/afc.jpeg);"));

        horizontalLayout_2->addWidget(widget_2);

        Home->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(Home);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Home->setStatusBar(statusbar);

        retranslateUi(Home);

        QMetaObject::connectSlotsByName(Home);
    } // setupUi

    void retranslateUi(QMainWindow *Home)
    {
        Home->setWindowTitle(QApplication::translate("Home", "MainWindow", nullptr));
        label->setText(QApplication::translate("Home", "<html><head/><body><p align=\"center\"><span style=\" font-size:26pt; font-weight:600; color:#ffaa00;\">AFC CyberSecurity </span></p><p align=\"center\"><span style=\" font-size:26pt; font-weight:600; color:#ffaa00;\">Main Hub</span></p></body></html>", nullptr));
        Tutorial_Button->setText(QApplication::translate("Home", "Tutorial", nullptr));
        Videos_Button->setText(QApplication::translate("Home", "Videos", nullptr));
        Attacks_Button->setText(QApplication::translate("Home", "CyberBox", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Home: public Ui_Home {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOME_H
