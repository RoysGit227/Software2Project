#include "integrity.h"
#include "ui_integrity.h"

Integrity::Integrity(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Integrity)
{
    ui->setupUi(this);
}

Integrity::~Integrity()
{
    delete ui;
}

void Integrity::on_Back_Button_clicked()
{
    close();
}

