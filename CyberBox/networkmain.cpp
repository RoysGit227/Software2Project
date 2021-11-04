#include "networkmain.h"
#include "ui_networkmain.h"

NetworkMain::NetworkMain(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::NetworkMain)
{
    ui->setupUi(this);
}

NetworkMain::~NetworkMain()
{
    delete ui;
}
