#ifndef ECGMAIN_H
#define ECGMAIN_H
#include "qcustomplot.h"
#include <QMainWindow>

namespace Ui {
class ECGMain;
}

class ECGMain : public QMainWindow
{
    Q_OBJECT

public:
    explicit ECGMain(QWidget *parent = nullptr);
    ~ECGMain();

public slots:
    void ecgPlot(double data[1000]);

private:
    Ui::ECGMain *ui;
    friend class Sensor;
};

#endif // ECGMAIN_H
