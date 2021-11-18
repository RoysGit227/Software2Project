#ifndef SENSOR_H
#define SENSOR_H

#include <QObject>

class Sensor : public QObject
{
    Q_OBJECT
public:
    explicit Sensor(QObject *parent = nullptr);
    void setData(double d);
    double getData(int i)const;
    void dataPlot(int i);
    void readSignalFile(QString filename);


signals:
   void plotEcg(double[1000]);
   void plotEeg(double [1000]);
   void plotSpo2(double [1000]);

private:
    double data[1000];
    QString dataTxt[1000];

signals:

};

#endif // SENSOR_H
