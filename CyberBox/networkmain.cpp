#include "networkmain.h"
#include "ui_networkmain.h"
#include <math.h>
#include <QDebug>


NetworkMain::NetworkMain(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::NetworkMain)
{
    ui->setupUi(this);
    QStringList titles;
    setWindowTitle("IP TABLES");
    ui->tableWidget->setColumnCount(2);
    ui->tableWidget->setRowCount(24);
    titles << "Device Name" << "IP Address";
    ui->tableWidget->setHorizontalHeaderLabels(titles);
    ui->errorLabel->setVisible(false);
    usageGraph(1);
}

NetworkMain::~NetworkMain()
{
    delete ui;
}


void NetworkMain::usageGraph(int a){
    //Compute Data points
    QVector<double> x(100), y(100);
    for(int i = 0; i < 100; i++){
        x[i] = i;
        y[i] = a*log2(5*x[i]);
        //qDebug()<<"SAT VAL: "<<y[i];
    }
    ui->plot->addGraph();//Add Graph
    ui->plot->graph(0)->setData(x,y);//Plot Data
    ui->plot->replot();//Replot Data
    ui->plot->xAxis->setRange(0,100);
    ui->plot->yAxis->setRange(0,100);

    ui->plot->graph(0)->setPen(QPen("red"));
    ui->plot->xAxis->setLabel("Time (seconds)");
    ui->plot->yAxis->setLabel("Network Utilization (%)");
}

void NetworkMain::on_addDevButton_clicked()
{
    QString txt = ui->devNameLine->text();
    emit addDev(txt);

    ui->plot->clearPlottables();//Clear graph data
    if(numDev != 24)
        numDev++;
    usageGraph(numDev);//Replot Graph
}


//SIGNALS SENT TO RETRIEVE DATA FROM ROUTER CLASS TO UPDATE UI
void NetworkMain::on_removeDevButton_clicked()
{
    ui->errorLabel->setVisible(false);
    emit remDev(ui->dev_spinBox->value());

    ui->plot->clearPlottables();//Clear graph data
    if(numDev != 0)
        numDev--;
    usageGraph(numDev);//Replot Graph
}

void NetworkMain::error(){
    ui->errorLabel->setVisible(true);//Router is Saturated
}

void NetworkMain::Update(QString device, QString address, int i, QString u){
    ui->tableWidget->setItem(i, 0, new QTableWidgetItem(device));//Router Device Names
    ui->tableWidget->setItem(i, 1, new QTableWidgetItem(address));//Router IP Addresses

    ui->plot->clearPlottables();//Clear graph data
    numDev = (u.at(0)==QChar('a')) ? (numDev + 1):(numDev-1);
    qDebug()<< "Updated: "<<QString::number(numDev);
    qDebug()<< "Updated: "<<QString::number(i);
    usageGraph(numDev);
}
