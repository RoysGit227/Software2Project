#include "sensor.h"
#include <QtDebug>
#include <QFile>
#include <QTextStream>
Sensor::Sensor(QObject *parent) : QObject(parent)
{

}

void Sensor::setData(double d){
    d++;
    qDebug()<<"SET DATA VAL: " << d;
}

double Sensor::getData(int i)const{
    qDebug()<<"SENSOR DATA " << i<< ":" << dataTxt[i];
    return data[i];
}

void Sensor::readSignalFile(QString filename){
    QFile file(filename);
    if(!file.exists()){
        qCritical() << "File not found";
        return;
    }

    if(!file.open(QIODevice::ReadOnly)){
        qCritical() << file.errorString();
        return;
    }

    QTextStream stream(&file);
    int i = 0;
    while(!stream.atEnd()){
        dataTxt[i] = stream.readLine();
        data[i] = dataTxt[i].toDouble();
        i++;
    }
    file.close();

}

void Sensor::dataPlot(int i){
    if(i == 0)
        emit plotEcg(data);
    else if(i == 1)
        emit plotEeg(data);
    else if(i == 2)
        emit plotSpo2(data);
}
