#include "cyberbox.h"

#include <QApplication>
#include <QString>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    CyberBox box;//Main Window
    Router netWork;//Create network

    //Connect signal to update IP Tables between Router Object and NetworkMain.ui
    QObject::connect(&netWork, SIGNAL(change(QString,QString,int)), box.nw2, SLOT(Update(QString,QString,int)));
    QObject::connect(box.nw2, SIGNAL(addDev(QString)), &netWork, SLOT(add(QString)));
    QObject::connect(box.nw2, SIGNAL(remDev(int)), &netWork, SLOT(remove(int)));

    netWork.addDevice(QString("Router Pi"));

    box.show();
    return a.exec();    
}
