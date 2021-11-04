#ifndef CYBERBOX_H
#define CYBERBOX_H

#include <QMainWindow>
#include "attackermain.h"
#include "maincompmain.h"
#include "networkmain.h"
#include "ecgmain.h"
#include "eegmain.h"
#include "spo2main.h"

QT_BEGIN_NAMESPACE
namespace Ui { class CyberBox; }
QT_END_NAMESPACE

class CyberBox : public QMainWindow
{
    Q_OBJECT

public:
    CyberBox(QWidget *parent = nullptr);
    ~CyberBox();

private slots:


    void on_pushButtonAttacker_clicked();

    void on_pushButtonMain_clicked();

    void on_pushButtonNetwork_clicked();

    void on_pushButtonECG_clicked();

    void on_pushButtonEEG_clicked();

    void on_pushButtonSpO2_clicked();

private:
    Ui::CyberBox *ui;
    Attacker *nw = new Attacker();
    MainCompMain *nw1 = new MainCompMain();
    NetworkMain *nw2 = new NetworkMain();
    ECGMain *nw3 = new ECGMain();
    EEGMain *nw4 = new EEGMain();
    SpO2Main *nw5 = new SpO2Main();
};
#endif // CYBERBOX_H
