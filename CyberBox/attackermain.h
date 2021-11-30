#ifndef ATTACKERMAIN_H
#define ATTACKERMAIN_H

#include <QMainWindow>
#include <QTimer>
#include "router.h"
#include "qcustomplot.h"

namespace Ui {
class Attacker;

}

class Attacker : public QMainWindow
{
    Q_OBJECT

public:
    explicit Attacker(QWidget *parent = nullptr);
    ~Attacker();

signals:
    void zombieAdd(QString device);
    void zombieRem(int i);
    void zombieRemAll(QString device);

private slots:
    void on_addDevButton_clicked();


    void on_removeDevButton_clicked();

    void on_removeDevButton_2_clicked();

    void on_addDevButton_2_clicked();

private:
    Ui::Attacker *ui;
    int numDev = 1;

};


#endif // ATTACKERKMAIN_H

