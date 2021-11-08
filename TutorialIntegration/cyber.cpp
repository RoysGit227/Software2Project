#include "cyber.h"
#include "ui_cyber.h"

Cyber::Cyber(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Cyber)
{
    ui->setupUi(this);
}

Cyber::~Cyber()
{
    delete ui;
}


void Cyber::on_login_Button_clicked()
{
    Newhome= new Home(this);
    Newhome->show();
    hide();
}

