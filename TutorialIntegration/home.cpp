#include "home.h"
#include "ui_home.h"

Home::Home(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Home)
{
    ui->setupUi(this);
}

Home::~Home()
{
    delete ui;
}

void Home::on_Tutorial_Button_clicked()
{
    newTutorial= new Tutorial(this);
    newTutorial->show();
}


void Home::on_Attacks_Button_clicked()
{
    newCyberbox= new CyberBox(this);
    newCyberbox->show();
}

