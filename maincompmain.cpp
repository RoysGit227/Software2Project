#include "maincompmain.h"
#include "ui_maincompmain.h"

MainCompMain::MainCompMain(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainCompMain)
{
    ui->setupUi(this);
}

MainCompMain::~MainCompMain()
{
    delete ui;
}
