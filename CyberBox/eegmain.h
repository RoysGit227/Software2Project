#ifndef EEGMAIN_H
#define EEGMAIN_H

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

private:
    Ui::EEGMain *ui;
};

#endif // EEGMAIN_H
