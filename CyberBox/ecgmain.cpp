#include "ecgmain.h"
#include "ui_ecgmain.h"

ECGMain::ECGMain(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ECGMain)
{
    ui->setupUi(this);
}

ECGMain::~ECGMain()
{
    delete ui;
}
