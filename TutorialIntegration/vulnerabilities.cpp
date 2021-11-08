#include "vulnerabilities.h"
#include "ui_vulnerabilities.h"

Vulnerabilities::Vulnerabilities(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Vulnerabilities)
{
    ui->setupUi(this);
}

Vulnerabilities::~Vulnerabilities()
{
    delete ui;
}

void Vulnerabilities::on_Integrity_Button_clicked()
{
    newIntegrity= new Integrity(this);
    newIntegrity->show();
}


void Vulnerabilities::on_Confidentiality_Button_clicked()
{
    newConfidentiality= new Confidentiality(this);
    newConfidentiality->show();
}


void Vulnerabilities::on_Availability_Button_clicked()
{
    newAvailability= new Availability(this);
    newAvailability->show();
}

