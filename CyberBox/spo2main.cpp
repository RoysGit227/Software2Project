#include "spo2main.h"
#include "ui_spo2main.h"
#include "qcustomplot.h"

SpO2Main::SpO2Main(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SpO2Main)
{
    ui->setupUi(this);
    ui->plainTextEdit->setTextInteractionFlags(Qt::NoTextInteraction);
}

SpO2Main::~SpO2Main()
{
    delete ui;
}

void SpO2Main::spO2Plot(double data[1000]){
    //Compute 1000 Data points read from patient text file
    QVector<double> x(1000), y(1000);
    for(int i = 0; i < 1000; i++){
        x[i] = i;
        y[i] = data[i]*100;//Array containing patient text file data
    }

    //Plot data in given axis range, pen color, and label names
    ui->plot1->addGraph();
    ui->plot1->graph(0)->setData(x, y);//Plot Data
   // ui->plot1->clearPlottables();

    ui->plot1->replot();//Replot data after changing values (For Attacker)
    ui->plot1->xAxis->setRange(0,1000);
    ui->plot1->yAxis->setRange(75,110);

    //ui->plot1->graph(0)->setPen(QPen("blue"));
    ui->plot1->xAxis->setLabel("t(ms)");
    ui->plot1->yAxis->setLabel("Percent Oxygen");
}
void SpO2Main::clearSpo2(){
     ui->plot1->clearPlottables();
     qDebug()<<"CLEARED";
}
