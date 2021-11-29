#include "attackermain.h"
#include "ui_attackermain.h"
#include <math.h>
#include <QDebug>

Attacker::Attacker(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Attacker)
{
    ui->setupUi(this);
}

Attacker::~Attacker()
{
    delete ui;
}



void Attacker::on_addDevButton_clicked()
{
    emit zombieAdd(ui->devNameLine->text());
}


void Attacker::on_removeDevButton_clicked()
{
    emit zombieRem(ui->dev_spinBox->value());

}

