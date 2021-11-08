#include "router.h"
#include <QDebug>
Router::Router(QObject *parent) : QObject(parent)
{
    for (int i = 0; i < 5; i++) {
        Node point(i);//Constructor with IP Address generation
        ipTable[i] = point;//Set IP Address' of table
    }
}

Router::~Router(){}

const QString& Router::getDeviceName(int i) const{return ipTable[i].device_name;}//Getter function to get device connected
const QString& Router::getIPAddress(int i) const{return ipTable[i].addr;}//Getter function to get device IP Address

//Function to add device given name
const Node& Router::addDevice(const QString& nm){
    Node* tmp = new Node();//Create new node
    tmp->device_name = nm;//set device name

    //Traverse through entire IPTable
    for(int i = 0; i < 5; i++){
        //If there is a vacant spot to connect to, connect
        if(!(filled[i])){
            filled[i] = true;//IP Address is not being used
            ipTable[i].device_name = nm;//Update device taking address
            ipTable[i].addr = "192.168.0." + QString::number(i);
            tmp = &ipTable[i];//set node that will be stored in device to hold information of connection
            tmp->next = &ipTable[i];
            ipTable[i].next = tmp;
            emit change(tmp->device_name, tmp->addr,i);//SIGNAL to update IPTable in NetworkMain.ui
            return *tmp;
        }
    }
    return *tmp;
}

void Router::removeDevice(int i){
    ipTable[i].device_name = " ";
    ipTable[i].addr =" ";
    ipTable[i].next->device_name = "None";
    ipTable[i].next->addr = " ";

    emit change(" ", " ",i);//SIGNAL to update IPTable in NetworkMain.ui
    filled[i] = false;
    ipTable[i].next->next = NULL;//Device previously connected has no connection
    ipTable[i].next = NULL;//Disconnect device
}

//SLOTS FOR UPDATING TABLE IN NETWORKMAIN.UI
void Router::add(QString device){
    qDebug()<<"RECEIVED: " << device;
    addDevice(device);
}

void Router::remove(int i){
    removeDevice(i);
}
