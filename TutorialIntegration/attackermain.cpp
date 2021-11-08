#include "attackermain.h"
#include "ui_attackermain.h"

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
