#ifndef ECGMAIN_H
#define ECGMAIN_H

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

private:
    Ui::ECGMain *ui;
};

#endif // ECGMAIN_H
