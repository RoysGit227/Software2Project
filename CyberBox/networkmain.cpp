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
    ui->errorLabel->setVisible(false);
    usageGraph();
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


void NetworkMain::usageGraph(){
    //Compute Data points
    QVector<double> x(100), y(100);
    for(int i = 0; i < 100; i++){
        x[i] = i;
        y[i] = x[i]*x[i];
    }
    ui->plot->addGraph();//Add Graph
    ui->plot->graph(0)->setData(x,y);//Plot Data
    ui->plot->replot();//Replot Data
    ui->plot->xAxis->setRange(0,100);
    ui->plot->yAxis->setRange(0,10000);

    ui->plot->graph(0)->setPen(QPen("red"));
    ui->plot->xAxis->setLabel("Time (min)");
    ui->plot->yAxis->setLabel("Memory Used");
}

void NetworkMain::on_addDevButton_clicked()
{
    QString txt = ui->devNameLine->text();
    emit addDev(txt);

    ui->plot->clearPlottables();//Clear graph data
    usageGraph();//Replot Graph
}


//SIGNALS SENT TO RETRIEVE DATA FROM ROUTER CLASS TO UPDATE UI
void NetworkMain::on_removeDevButton_clicked()
{
    ui->errorLabel->setVisible(false);
    emit remDev(ui->dev_spinBox->value());

    ui->plot->clearPlottables();//Clear graph data
    usageGraph();//Replot Graph
}

void NetworkMain::error(){
    ui->errorLabel->setVisible(true);//Router is Saturated
}
