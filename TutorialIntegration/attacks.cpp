#include "attacks.h"
#include "ui_attacks.h"

Attacks::Attacks(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Attacks)
{
    ui->setupUi(this);
}

Attacks::~Attacks()
{
    delete ui;
}
