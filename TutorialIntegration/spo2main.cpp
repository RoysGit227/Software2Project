#include "spo2main.h"
#include "ui_spo2main.h"

SpO2Main::SpO2Main(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SpO2Main)
{
    ui->setupUi(this);
}

SpO2Main::~SpO2Main()
{
    delete ui;
}
