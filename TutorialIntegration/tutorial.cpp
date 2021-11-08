#include "tutorial.h"
#include "ui_tutorial.h"

Tutorial::Tutorial(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Tutorial)
{
    ui->setupUi(this);
}

Tutorial::~Tutorial()
{
    delete ui;
}

void Tutorial::on_Vulnerability_Button_clicked()
{
    newVulnerabilites= new Vulnerabilities(this);
    newVulnerabilites->show();
}


void Tutorial::on_Malware_Button_clicked()
{
    newMalware= new Malware(this);
    newMalware->show();
}


void Tutorial::on_DDoS_Button_clicked()
{
    newWhatis= new Whatis(this);
    newWhatis->show();
}


void Tutorial::on_Back_Button_clicked()
{
    close();
}

