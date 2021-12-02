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
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainCompMain
{
public:
    QAction *Reset;
    QAction *ClearPlainText;
    QAction *CleaEncryptedText;
    QAction *actionAbout_Qt;
    QAction *Exit;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QComboBox *TypeComboBox;
    QPushButton *EncryptionPushButton;
    QPushButton *DecryptionPushButton;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QPlainTextEdit *plainTextEdit_plain;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QPlainTextEdit *plainTextEdit_encrypted;
    QStackedWidget *stackedWidget;
    QWidget *CaesarCipher;
    QLabel *label_3;
    QLineEdit *lineEdit_CC_key;
    QWidget *page_2;
    QLineEdit *lineEdit_DES_key_2;
    QLabel *label_7;
    QWidget *DES;
    QLabel *label_6;
    QLineEdit *lineEdit_DES_key;
    QWidget *image;
    QLineEdit *lineEdit_key;
    QLabel *label_5;
    QPushButton *pushButton;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuHelp;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainCompMain)
    {
        if (MainCompMain->objectName().isEmpty())
            MainCompMain->setObjectName(QString::fromUtf8("MainCompMain"));
        MainCompMain->resize(913, 652);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainCompMain->sizePolicy().hasHeightForWidth());
        MainCompMain->setSizePolicy(sizePolicy);
        Reset = new QAction(MainCompMain);
        Reset->setObjectName(QString::fromUtf8("Reset"));
        ClearPlainText = new QAction(MainCompMain);
        ClearPlainText->setObjectName(QString::fromUtf8("ClearPlainText"));
        CleaEncryptedText = new QAction(MainCompMain);
        CleaEncryptedText->setObjectName(QString::fromUtf8("CleaEncryptedText"));
        actionAbout_Qt = new QAction(MainCompMain);
        actionAbout_Qt->setObjectName(QString::fromUtf8("actionAbout_Qt"));
        Exit = new QAction(MainCompMain);
        Exit->setObjectName(QString::fromUtf8("Exit"));
        centralWidget = new QWidget(MainCompMain);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout_3 = new QVBoxLayout(centralWidget);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        TypeComboBox = new QComboBox(centralWidget);
        TypeComboBox->addItem(QString());
        TypeComboBox->addItem(QString());
        TypeComboBox->addItem(QString());
        TypeComboBox->addItem(QString());
        TypeComboBox->setObjectName(QString::fromUtf8("TypeComboBox"));

        horizontalLayout->addWidget(TypeComboBox);

        EncryptionPushButton = new QPushButton(centralWidget);
        EncryptionPushButton->setObjectName(QString::fromUtf8("EncryptionPushButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(EncryptionPushButton->sizePolicy().hasHeightForWidth());
        EncryptionPushButton->setSizePolicy(sizePolicy1);
        EncryptionPushButton->setMinimumSize(QSize(200, 0));

        horizontalLayout->addWidget(EncryptionPushButton);

        DecryptionPushButton = new QPushButton(centralWidget);
        DecryptionPushButton->setObjectName(QString::fromUtf8("DecryptionPushButton"));
        sizePolicy1.setHeightForWidth(DecryptionPushButton->sizePolicy().hasHeightForWidth());
        DecryptionPushButton->setSizePolicy(sizePolicy1);
        DecryptionPushButton->setMinimumSize(QSize(200, 0));

        horizontalLayout->addWidget(DecryptionPushButton);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        plainTextEdit_plain = new QPlainTextEdit(centralWidget);
        plainTextEdit_plain->setObjectName(QString::fromUtf8("plainTextEdit_plain"));

        verticalLayout->addWidget(plainTextEdit_plain);


        horizontalLayout_2->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_2->addWidget(label_2);

        plainTextEdit_encrypted = new QPlainTextEdit(centralWidget);
        plainTextEdit_encrypted->setObjectName(QString::fromUtf8("plainTextEdit_encrypted"));

        verticalLayout_2->addWidget(plainTextEdit_encrypted);


        horizontalLayout_2->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout_2);

        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        sizePolicy.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy);
        stackedWidget->setLayoutDirection(Qt::LeftToRight);
        stackedWidget->setFrameShadow(QFrame::Plain);
        CaesarCipher = new QWidget();
        CaesarCipher->setObjectName(QString::fromUtf8("CaesarCipher"));
        CaesarCipher->setEnabled(true);
        label_3 = new QLabel(CaesarCipher);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 10, 129, 16));
        lineEdit_CC_key = new QLineEdit(CaesarCipher);
        lineEdit_CC_key->setObjectName(QString::fromUtf8("lineEdit_CC_key"));
        lineEdit_CC_key->setGeometry(QRect(170, 10, 481, 22));
        stackedWidget->addWidget(CaesarCipher);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        lineEdit_DES_key_2 = new QLineEdit(page_2);
        lineEdit_DES_key_2->setObjectName(QString::fromUtf8("lineEdit_DES_key_2"));
        lineEdit_DES_key_2->setGeometry(QRect(120, 10, 551, 20));
        label_7 = new QLabel(page_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(10, 10, 111, 21));
        stackedWidget->addWidget(page_2);
        DES = new QWidget();
        DES->setObjectName(QString::fromUtf8("DES"));
        label_6 = new QLabel(DES);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 10, 131, 20));
        lineEdit_DES_key = new QLineEdit(DES);
        lineEdit_DES_key->setObjectName(QString::fromUtf8("lineEdit_DES_key"));
        lineEdit_DES_key->setGeometry(QRect(150, 10, 591, 20));
        stackedWidget->addWidget(DES);
        image = new QWidget();
        image->setObjectName(QString::fromUtf8("image"));
        lineEdit_key = new QLineEdit(image);
        lineEdit_key->setObjectName(QString::fromUtf8("lineEdit_key"));
        lineEdit_key->setGeometry(QRect(250, 0, 591, 22));
        label_5 = new QLabel(image);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(160, 0, 81, 16));
        pushButton = new QPushButton(image);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(0, 0, 131, 28));
        stackedWidget->addWidget(image);

        verticalLayout_3->addWidget(stackedWidget);

        MainCompMain->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainCompMain);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 913, 26));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        MainCompMain->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainCompMain);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainCompMain->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(Exit);
        menuEdit->addAction(Reset);
        menuEdit->addSeparator();
        menuEdit->addAction(ClearPlainText);
        menuEdit->addAction(CleaEncryptedText);
        menuHelp->addAction(actionAbout_Qt);

        retranslateUi(MainCompMain);

        stackedWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(MainCompMain);
    } // setupUi

    void retranslateUi(QMainWindow *MainCompMain)
    {
        MainCompMain->setWindowTitle(QCoreApplication::translate("MainCompMain", "Encryption Algorithms", nullptr));
        Reset->setText(QCoreApplication::translate("MainCompMain", "Reset", nullptr));
#if QT_CONFIG(tooltip)
        Reset->setToolTip(QCoreApplication::translate("MainCompMain", "Reset", nullptr));
#endif // QT_CONFIG(tooltip)
        ClearPlainText->setText(QCoreApplication::translate("MainCompMain", "Clear Plain Text", nullptr));
        CleaEncryptedText->setText(QCoreApplication::translate("MainCompMain", "Clear Encrypted Text", nullptr));
        actionAbout_Qt->setText(QCoreApplication::translate("MainCompMain", "About Qt", nullptr));
        Exit->setText(QCoreApplication::translate("MainCompMain", "Exit", nullptr));
        TypeComboBox->setItemText(0, QCoreApplication::translate("MainCompMain", "Caesar Cipher", nullptr));
        TypeComboBox->setItemText(1, QCoreApplication::translate("MainCompMain", "DES", nullptr));
        TypeComboBox->setItemText(2, QCoreApplication::translate("MainCompMain", "DES with Text", nullptr));
        TypeComboBox->setItemText(3, QCoreApplication::translate("MainCompMain", "Text File Encryption", nullptr));

#if QT_CONFIG(tooltip)
        TypeComboBox->setToolTip(QCoreApplication::translate("MainCompMain", "Choose Encryption Algorithm", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        TypeComboBox->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(tooltip)
        EncryptionPushButton->setToolTip(QCoreApplication::translate("MainCompMain", "Encrypt Input Text", nullptr));
#endif // QT_CONFIG(tooltip)
        EncryptionPushButton->setText(QCoreApplication::translate("MainCompMain", "Encrypt", nullptr));
#if QT_CONFIG(tooltip)
        DecryptionPushButton->setToolTip(QCoreApplication::translate("MainCompMain", "Decrypt input text", nullptr));
#endif // QT_CONFIG(tooltip)
        DecryptionPushButton->setText(QCoreApplication::translate("MainCompMain", "Decrypt", nullptr));
        label->setText(QCoreApplication::translate("MainCompMain", "  Plain-Text", nullptr));
        label_2->setText(QCoreApplication::translate("MainCompMain", "Encrypted-Text", nullptr));
        label_3->setText(QCoreApplication::translate("MainCompMain", "Key :  Range ( 0 : 26 )", nullptr));
        label_7->setText(QCoreApplication::translate("MainCompMain", "DES Secret Key :", nullptr));
        label_6->setText(QCoreApplication::translate("MainCompMain", "DES HEX Secret Key : ", nullptr));
        label_5->setText(QCoreApplication::translate("MainCompMain", "Text File Key :", nullptr));
        pushButton->setText(QCoreApplication::translate("MainCompMain", "Open File", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainCompMain", "File", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("MainCompMain", "Edit", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("MainCompMain", "Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainCompMain: public Ui_MainCompMain {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINCOMPMAIN_H
