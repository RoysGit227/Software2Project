#include "attackerdialog.h"
#include "ui_attackerdialog.h"

AttackerDialog::AttackerDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AttackerDialog)
{
    ui->setupUi(this);
}

AttackerDialog::~AttackerDialog()
{
    delete ui;
}
