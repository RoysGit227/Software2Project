#ifndef TUTORIAL_H
#define TUTORIAL_H

#include <QMainWindow>
#include "vulnerabilities.h"
#include "malware.h"
#include "whatis.h"

namespace Ui {
class Tutorial;
}

class Tutorial : public QMainWindow
{
    Q_OBJECT

public:
    explicit Tutorial(QWidget *parent = nullptr);
    ~Tutorial();

private slots:
    void on_Vulnerability_Button_clicked();

    void on_Malware_Button_clicked();

    void on_DDoS_Button_clicked();

    void on_Back_Button_clicked();

private:
    Ui::Tutorial *ui;
    Vulnerabilities *newVulnerabilites;
    Malware *newMalware;
    Whatis *newWhatis;
};

#endif // TUTORIAL_H
