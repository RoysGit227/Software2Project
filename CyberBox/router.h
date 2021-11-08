#ifndef ROUTER_H
#define ROUTER_H

#include <QObject>
#include <QString>
#include "node.h"

class Router : public QObject
{
    Q_OBJECT

public:
    Router(QObject *parent = nullptr);
    ~Router();
    const QString& getIPAddress(int i) const;//Get IP Address at specified Index
    const QString& getDeviceName(int i) const;//Get Device Name at specified Index
    const Node& addDevice(const QString& nm);//Add Device to IP Address
    void removeDevice(int i);//Remove Device from network

signals:
    void change(QString device, QString address, int i);
    void full();
public slots:
    void add(QString device);
    void remove(int i);

private:
    Node ipTable[6];
    bool filled[6] = {false,false,false,false,false,false};
    int size;
    friend class NetworkMain;

};

#endif // ROUTER_H
