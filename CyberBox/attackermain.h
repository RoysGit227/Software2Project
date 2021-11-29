#ifndef ATTACKERMAIN_H
#define ATTACKERMAIN_H

#include <QMainWindow>
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


private slots:
    void on_addDevButton_clicked();


    void on_removeDevButton_clicked();

private:
    Ui::Attacker *ui;
    int numDev = 1;

};


#endif // ATTACKERKMAIN_H

