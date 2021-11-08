#ifndef NETWORKMAIN_H
#define NETWORKMAIN_H
#include <QMainWindow>
#include "router.h"

namespace Ui {
class NetworkMain;
}

class NetworkMain : public QMainWindow
{
    Q_OBJECT

public:
    explicit NetworkMain(QWidget *parent = nullptr);
    ~NetworkMain();

signals:
    void addDev(QString device);
    void remDev(int i);

public slots:
    void Update(QString device, QString address, int i);

private slots:
    void on_addDevButton_clicked();
    void on_removeDevButton_clicked();

private:
    Ui::NetworkMain *ui;

};


#endif // NETWORKMAIN_H
