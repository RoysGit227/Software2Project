#include "ecgdialog.h"
#include "ui_ecgdialog.h"

ECGDialog::ECGDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ECGDialog)
{
    ui->setupUi(this);
}

ECGDialog::~ECGDialog()
{
    delete ui;
}
