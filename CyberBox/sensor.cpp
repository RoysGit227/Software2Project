#include "sensor.h"
#include <QtDebug>
#include <QFile>
#include <QTextStream>
Sensor::Sensor(QObject *parent) : QObject(parent)
{

}

//Setter Function
void Sensor::setData(double d, int i){
    data[i] = d;
}

//Getter Function
double Sensor::getData(int i)const{
    return data[i];
}

//Function that reads file in directory and updates values that will be plotted
void Sensor::readSignalFile(QString filename){
    QFile file(filename);
    //Ensure path is correct
    if(!file.exists()){
        qCritical() << "File not found";
        return;
    }
    //Only allow user to read file
    if(!file.open(QIODevice::ReadOnly)){
        qCritical() << file.errorString();
        return;
    }

    //Read each line of data and handle negative values
    QTextStream stream(&file);
    int i = 0;
    while(!stream.atEnd()){
        dataTxt[i] = stream.readLine();
        if(dataTxt[i].at(0) == QChar('-')){
            dataTxt[i].remove(0,1);
            data[i] = dataTxt[i].toDouble() * -1;
        }
        else
            data[i] = dataTxt[i].toDouble();
        i++;
    }
    file.close();

}

void Sensor::dataPlot(int i){
    //Send data to correct sensor based on integer received
    if(i == 0)
        emit plotEcg(data);
    else if(i == 1)
        emit plotEeg(data);
    else if(i == 2)
        emit plotSpo2(data);
}
