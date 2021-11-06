#ifndef NETWORKMAIN_H
#define NETWORKMAIN_H
#include <QMainWindow>

namespace Ui {
class NetworkMain;
}

class NetworkMain : public QMainWindow
{
    Q_OBJECT

public:
    explicit NetworkMain(QWidget *parent = nullptr);
    ~NetworkMain();
public slots:
    void Update(QString device, QString address, int i);

private:
    Ui::NetworkMain *ui;

};


#endif // NETWORKMAIN_H
