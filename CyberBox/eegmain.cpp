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

void EEGMain::eegPlot(double data[1000]){
    //Compute 1000 Data points read from patient text file
    QVector<double> x(1000), y(1000);
    for(int i = 0; i < 1000; i++){
        x[i] = i;
        y[i] = data[i];//Array containing patient text file data
    }

    //Plot data in given axis range, pen color, and label names
    ui->plot1->addGraph();
    ui->plot1->graph(0)->setData(x, y);//Plot Data
    ui->plot1->replot();//Replot data after changing values (For Attacker)
    ui->plot1->xAxis->setRange(0,600);
    ui->plot1->yAxis->setRange(-1,1);

    ui->plot1->graph(0)->setPen(QPen("red"));
    ui->plot1->xAxis->setLabel("t(ms)");
    ui->plot1->yAxis->setLabel("mV");
}
