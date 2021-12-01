#include "cyberbox.h"

#include <QApplication>
#include <QString>
#include <QFile>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QFile styleSheetFile("C:/Users/Owner/Documents/Software2Project-main/CyberBox/Diffnes.qss");
    styleSheetFile.open(QFile::ReadOnly);
    QString styleSheet = QLatin1String(styleSheetFile.readAll());
    app.setStyleSheet(styleSheet);

    CyberBox box;//Main Window
    Router netWork;//Create network
    Sensor ecgSensor;//Create ECG Sensor
    Sensor eegSensor;//Create EEG Sensor
    Sensor spO2Sensor;//Create SPO2 Sensor


    //Connect signal to update IP Tables between Router Object and NetworkMain.ui
    QObject::connect(&netWork, SIGNAL(change(QString,QString,int,QString)), box.nw2, SLOT(Update(QString,QString,int,QString)));
    QObject::connect(&netWork, SIGNAL(full()), box.nw2, SLOT(error()));
    QObject::connect(box.nw2, SIGNAL(addDev(QString)), &netWork, SLOT(add(QString)));
    QObject::connect(box.nw2, SIGNAL(remDev(int)), &netWork, SLOT(remove(int)));

    //Connect signals to plot Sensor Data
    QObject::connect(&ecgSensor, SIGNAL(plotEcg(double*)), box.nw3, SLOT(ecgPlot(double*)));
    QObject::connect(&eegSensor, SIGNAL(plotEeg(double*)), box.nw4, SLOT(eegPlot(double*)));
    QObject::connect(&spO2Sensor, SIGNAL(plotSpo2(double*)), box.nw5, SLOT(spO2Plot(double*)));

    //Connect Signals from Attacker to NetWork
    QObject::connect(box.nw, SIGNAL(zombieAdd(QString)), &netWork, SLOT(add(QString)));
    QObject::connect(box.nw, SIGNAL(zombieRem(int)), &netWork, SLOT(remove(int)));
    QObject::connect(&netWork, SIGNAL(full()), box.nw, SLOT(stopTimer()));

    QObject::connect(box.nw, SIGNAL(badSpo2Plot(int)), &spO2Sensor, SLOT(dataPlot(int)));
    QObject::connect(box.nw, SIGNAL(badSpo2Data(QString)), &spO2Sensor, SLOT(readSignalFile(QString)));
    QObject::connect(box.nw, SIGNAL(badClearplot()), box.nw5, SLOT(clearSpo2()));

    netWork.addDevice(QString("Router Pi"));

    ecgSensor.readSignalFile("C:/Users/Owner/Documents/Software2Project-main/CyberBox/ecg.txt");
    eegSensor.readSignalFile("C:/Users/Owner/Documents/Software2Project-main/CyberBox/eeg.txt");
    spO2Sensor.readSignalFile("C:/Users/Owner/Documents/Software2Project-main/CyberBox/spo2.txt");

    ecgSensor.dataPlot(0);
    eegSensor.dataPlot(1);
    spO2Sensor.dataPlot(2);

    box.show();
    return app.exec();
}
