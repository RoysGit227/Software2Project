#include "attackermain.h"
#include "ui_attackermain.h"
#include <math.h>
#include <QDebug>

QTimer *timer = new QTimer();
QTimer *timer2 = new QTimer();

Attacker::Attacker(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Attacker)
{
    ui->setupUi(this);
    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()),this,SLOT(on_addDevButton_clicked()));
    timer2 = new QTimer(this);
    connect(timer, SIGNAL(timeout()),this,SLOT(on_removeDevButton_2_clicked()));
}

Attacker::~Attacker()
{
    delete ui;
}



void Attacker::on_addDevButton_clicked()
{
    emit zombieAdd(ui->devNameLine->text());
}

void Attacker::on_addDevButton_2_clicked()
{
    timer->start(2000);
    emit zombieAdd(ui->devNameLine->text());
    if(numDev > 6){
        timer->stop();
        ui->addDevButton->setText("Done!");
    }
}

void Attacker::on_removeDevButton_clicked()
{
    emit zombieRem(ui->dev_spinBox->value());

}


void Attacker::on_removeDevButton_2_clicked()
{
    timer2->start(2000);
    emit zombieRemAll(ui->devNameLine->text());

}



