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
    double data[1000];

signals:
   void plotEcg(double*);
   void plotEeg(double*);
   void plotSpo2(double*);

private:
    QString dataTxt[1000];

signals:

};

#endif // SENSOR_H
