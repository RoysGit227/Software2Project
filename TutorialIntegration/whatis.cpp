#include "whatis.h"
#include "ui_whatis.h"

Whatis::Whatis(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Whatis)
{
    ui->setupUi(this);
}

Whatis::~Whatis()
{
    delete ui;
}

void Whatis::on_Back_Button_clicked()
{
    close();
}

