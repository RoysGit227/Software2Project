#include "cyberbox.h"
#include "ui_cyberbox.h"
#include <QPixmap>
#include <QDebug>
#include "attackermain.h"
#include "maincompmain.h"
#include "networkmain.h"
#include "ecgmain.h"
#include "eegmain.h"
#include "spo2main.h"
#include "router.h"


CyberBox::CyberBox(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::CyberBox)
{
    ui->setupUi(this);
    QPixmap pix("/Users/salvadorvalenzuela/Documents/Software2Project/CyberBox/WebPics/b01-raspi4-start.jpeg");
    ui->labelAttacker->setPixmap(pix.scaled(201,131,Qt::KeepAspectRatio));

    QPixmap pix1("/Users/salvadorvalenzuela/Documents/Software2Project/CyberBox/WebPics/b01-raspi4-start.jpeg");
    ui->labelMain->setPixmap(pix1.scaled(201,131,Qt::KeepAspectRatio));

    QPixmap pix2("/Users/salvadorvalenzuela/Documents/Software2Project/CyberBox/WebPics/Netgear-GS108-8-Port-Switch");
    ui->labelSwitch->setPixmap(pix2.scaled(251,151,Qt::KeepAspectRatio));

    QPixmap pix3("/Users/salvadorvalenzuela/Documents/Software2Project/CyberBox/WebPics/RaspberryPi.jpeg");
    ui->labelSN1->setPixmap(pix3.scaled(121,91,Qt::KeepAspectRatio));

    QPixmap pix4("/Users/salvadorvalenzuela/Documents/Software2Project/CyberBox/WebPics/RaspberryPi.jpeg");
    ui->labelSN2->setPixmap(pix4.scaled(121,91,Qt::KeepAspectRatio));

    QPixmap pix5("/Users/salvadorvalenzuela/Documents/Software2Project/CyberBox/WebPics/RaspberryPi.jpeg");
    ui->labelSN3->setPixmap(pix5.scaled(121,91,Qt::KeepAspectRatio));

    QPixmap pix6("/Users/salvadorvalenzuela/Documents/Software2Project/CyberBox/WebPics/BITalino.jpg");
    ui->labelBIT1->setPixmap(pix6.scaled(121,191,Qt::KeepAspectRatio));

    QPixmap pix7("/Users/salvadorvalenzuela/Documents/Software2Project/CyberBox/WebPics/BITalino.jpg");
    ui->labelBIT2->setPixmap(pix7.scaled(121,191,Qt::KeepAspectRatio));

    QPixmap pix8("/Users/salvadorvalenzuela/Documents/Software2Project/CyberBox/WebPics/BITalino.jpg");
    ui->labelBIT3->setPixmap(pix8.scaled(121,191,Qt::KeepAspectRatio));

    Router netWork;

    connect(&netWork, SIGNAL(Added(QString,QString,int)), nw2, SLOT(Update(QString,QString,int)));

    netWork.addDevice(QString("Main Computer"));
}

CyberBox::~CyberBox()
{
    delete ui;
}




void CyberBox::on_pushButtonAttacker_clicked()
{
    nw->show();
}


void CyberBox::on_pushButtonMain_clicked()
{
    nw1->show();
}


void CyberBox::on_pushButtonNetwork_clicked()
{
    nw2->show();
}


void CyberBox::on_pushButtonECG_clicked()
{
    nw3->show();
}


void CyberBox::on_pushButtonEEG_clicked()
{
    nw4->show();
}


void CyberBox::on_pushButtonSpO2_clicked()
{
    nw5->show();
}

