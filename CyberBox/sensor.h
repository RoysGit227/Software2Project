#ifndef SENSOR_H
#define SENSOR_H

#include <QObject>

class Sensor : public QObject
{
    Q_OBJECT
public:
    explicit Sensor(QObject *parent = nullptr);

    void setData(double d, int i);

    double getData(int i)const;

    double data[1000];

public slots:
    void dataPlot(int i);

    void readSignalFile(QString filename);

signals:
   void plotEcg(double*);

   void plotEeg(double*);

   void plotSpo2(double*);

private:
    QString dataTxt[1000];

signals:

};

#endif // SENSOR_H
