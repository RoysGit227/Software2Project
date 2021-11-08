#include "networkmain.h"
#include "ui_networkmain.h"
#include <QDebug>


NetworkMain::NetworkMain(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::NetworkMain)
{
    ui->setupUi(this);
    QStringList titles;
    setWindowTitle("IP TABLES");
    ui->tableWidget->setColumnCount(2);
    ui->tableWidget->setRowCount(6);
    titles << "Device Name" << "IP Address";
    ui->tableWidget->setHorizontalHeaderLabels(titles);

}

NetworkMain::~NetworkMain()
{
    delete ui;
}


void NetworkMain::Update(QString device, QString address, int i){
    ui->tableWidget->setItem(i, 0, new QTableWidgetItem(device));//Router Device Names
    ui->tableWidget->setItem(i, 1, new QTableWidgetItem(address));//Router IP Addresses
    qDebug()<< "ADDED DEVICE";
}
