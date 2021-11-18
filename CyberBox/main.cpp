#include "cyberbox.h"

#include <QApplication>
#include <QString>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    CyberBox box;//Main Window
    Router netWork;//Create network
    Sensor ecgSensor;//Create ECG Sensor
    Sensor eegSensor;//Create EEG Sensor
    Sensor spO2Sensor;//Create SPO2 Sensor

    //Connect signal to update IP Tables between Router Object and NetworkMain.ui
    QObject::connect(&netWork, SIGNAL(change(QString,QString,int)), box.nw2, SLOT(Update(QString,QString,int)));
    QObject::connect(&netWork, SIGNAL(full()), box.nw2, SLOT(error()));
    QObject::connect(box.nw2, SIGNAL(addDev(QString)), &netWork, SLOT(add(QString)));
    QObject::connect(box.nw2, SIGNAL(remDev(int)), &netWork, SLOT(remove(int)));

    //Connect signals to plot Sensor Data
    QObject::connect(&ecgSensor, SIGNAL(plotEcg(double[1000])), box.nw3, SLOT(ecgPlot(double[1000])));
    QObject::connect(&eegSensor, SIGNAL(plotEeg(double[1000])), box.nw4, SLOT(eegPlot(double[1000])));
    QObject::connect(&spO2Sensor, SIGNAL(plotSpo2(double[1000])), box.nw5, SLOT(spO2Plot(double[1000])));

    netWork.addDevice(QString("Router Pi"));

    ecgSensor.readSignalFile("C:/Users/jarel/OneDrive/Documents/Software2Project-main/CyberBox/ecg.txt");
    eegSensor.readSignalFile("C:/Users/jarel/OneDrive/Documents/Software2Project-main/CyberBox/ecg.txt");
    spO2Sensor.readSignalFile("C:/Users/jarel/OneDrive/Documents/Software2Project-main/CyberBox/ecg.txt");
    ecgSensor.dataPlot(0);
    eegSensor.dataPlot(1);
    spO2Sensor.dataPlot(2);

    box.show();
    return a.exec();    
}
