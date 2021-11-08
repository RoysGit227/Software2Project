#include "confidentiality.h"
#include "ui_confidentiality.h"

Confidentiality::Confidentiality(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Confidentiality)
{
    ui->setupUi(this);
}

Confidentiality::~Confidentiality()
{
    delete ui;
}

void Confidentiality::on_Back_Button_clicked()
{
    close();
}

