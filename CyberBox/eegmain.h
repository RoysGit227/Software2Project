#ifndef EEGMAIN_H
#define EEGMAIN_H
#include "qcustomplot.h"
#include <QMainWindow>

namespace Ui {
class EEGMain;
}

class EEGMain : public QMainWindow
{
    Q_OBJECT

public:
    explicit EEGMain(QWidget *parent = nullptr);
    ~EEGMain();

public slots:
    void eegPlot(double* data1);

private:
    Ui::EEGMain *ui;
    friend class Sensor;
};

#endif // EEGMAIN_H
