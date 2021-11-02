#ifndef CYBERBOX_H
#define CYBERBOX_H

#include <QMainWindow>

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
};
#endif // CYBERBOX_H
