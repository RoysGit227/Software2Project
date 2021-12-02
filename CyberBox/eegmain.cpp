#include "eegmain.h"
#include "ui_eegmain.h"
#include "qcustomplot.h"

EEGMain::EEGMain(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::EEGMain)
{
    ui->setupUi(this);
    ui->plainTextEdit->setTextInteractionFlags(Qt::NoTextInteraction);//Do not let user edit text
}

EEGMain::~EEGMain()
{
    delete ui;
}

void EEGMain::eegPlot(double data1[1000]){
    //Compute 1000 Data points read from patient text file
    QVector<double> x(1000), y(1000);
    for(int i = 0; i < 1000; i++){
        x[i] = i;
        y[i] = data1[i];//Array containing patient text file data
    }

    //Plot data in given axis range, pen color, and label names
    ui->plot1->addGraph();
    ui->plot1->graph(0)->setData(x, y);//Plot Data
    ui->plot1->replot();//Replot data after changing values (For Attacker)
    ui->plot1->xAxis->setRange(0,1000);
    ui->plot1->yAxis->setRange(-20,20);

    ui->plot1->graph(0)->setPen(QPen("teal"));
    ui->plot1->xAxis->setLabel("t(ms)");
    ui->plot1->yAxis->setLabel("uV");
}
