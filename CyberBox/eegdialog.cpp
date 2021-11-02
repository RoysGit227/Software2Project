#include "eegdialog.h"
#include "ui_eegdialog.h"

EEGDialog::EEGDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EEGDialog)
{
    ui->setupUi(this);
}

EEGDialog::~EEGDialog()
{
    delete ui;
}
