#ifndef SPO2MAIN_H
#define SPO2MAIN_H

#include <QMainWindow>

namespace Ui {
class SpO2Main;
}

class SpO2Main : public QMainWindow
{
    Q_OBJECT

public:
    explicit SpO2Main(QWidget *parent = nullptr);
    ~SpO2Main();

private:
    Ui::SpO2Main *ui;
};

#endif // SPO2MAIN_H
