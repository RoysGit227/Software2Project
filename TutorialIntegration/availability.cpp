#include "availability.h"
#include "ui_availability.h"

Availability::Availability(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Availability)
{
    ui->setupUi(this);
}

Availability::~Availability()
{
    delete ui;
}

void Availability::on_Back_Button_clicked()
{
    close();
}

