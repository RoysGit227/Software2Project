#include "eegmain.h"
#include "ui_eegmain.h"

EEGMain::EEGMain(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::EEGMain)
{
    ui->setupUi(this);
}

EEGMain::~EEGMain()
{
    delete ui;
}
