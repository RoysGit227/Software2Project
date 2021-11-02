#include "spo2dialog.h"
#include "ui_spo2dialog.h"

SpO2Dialog::SpO2Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SpO2Dialog)
{
    ui->setupUi(this);
}

SpO2Dialog::~SpO2Dialog()
{
    delete ui;
}
