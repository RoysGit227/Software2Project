#ifndef MAINCOMPMAIN_H
#define MAINCOMPMAIN_H

#include <QMainWindow>
#include <string>
#include <cstring>
#include <cctype>
#include <QMessageBox>
#include <iostream>
#include <bitset>
#include <sstream>
#include <algorithm>
#include <QMainWindow>

struct Position {
    int x;
    int y;
};

namespace Ui {
class MainCompMain;
}

class MainCompMain : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainCompMain(QWidget *parent = nullptr);

    ~MainCompMain();

private slots:
    void on_EncryptionPushButton_clicked();

    void on_DecryptionPushButton_clicked();

    void on_Reset_triggered();

    void on_ClearPlainText_triggered();

    void on_CleaEncryptedText_triggered();

    void on_Exit_triggered();

    void on_actionAbout_Qt_triggered();

    void on_TypeComboBox_currentTextChanged(const QString &arg1);

    void on_pushButton_clicked();

private:
    Ui::MainCompMain *ui;

    QString CaesarCipherE(QString plainText, int key);

    QString CaesarCipherD(QString encryptedText, int key);

    QString DESE(QString plainText, std::string key);

    QString iDESE(QString encryptedText, std::string key);

    std::vector<std::string> keyGeneration(std::string key);

    QString DESEncryption(std::string dataBlock, std::vector< std::string > keys);

    std::string Xor(std::string str1, std::string str2);

    std::string Function(std::string str1, std::string str2);

    std::string eBit(std::string str);

    QString DESD(QString plainText, std::string key);

    QString iDESD(QString encryptedText, std::string key);

    std::vector< std::string > BinaryAscii(std::string str);

    std::string BinaryAsciiToText(std::string str);

    std::string CharToBinaryAscii(char ch);

    char BinaryAsciiToChar(std::string binaryAscii);

    QString TextFileE(QString plainText, int key);

    QString TextFileD(QString encryptedText, int key);
};

#endif // MAINCOMPMAIN_H
