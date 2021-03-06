#include "router.h"
#include <QDebug>
Router::Router(QObject *parent) : QObject(parent)
{
    for (int i = 0; i < 24; i++) {
        Node point(i);//Constructor with IP Address generation
        ipTable[i] = point;//Set IP Address' of table
        filled[i] = false;//Set all filled values to false
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
    for(int i = 0; i < 24; i++){
        //If there is a vacant spot to connect to, connect
        if(!(filled[i])){
            filled[i] = true;//IP Address is not being used
            ipTable[i].device_name = nm;//Update device taking address
            ipTable[i].addr = "192.168.0." + QString::number(i);
            tmp = &ipTable[i];//set node that will be stored in device to hold information of connection
            tmp->next = &ipTable[i];//connect device to network
            ipTable[i].next = tmp;//connect router to device
            emit change(tmp->device_name, tmp->addr,i,"a");//SIGNAL to update IPTable in NetworkMain.ui
            return *tmp;
        }
    }
    emit full();
    return *tmp;
}

//Function used to disconnect defice from router table at index 'i'
void Router::removeDevice(int i){
    ipTable[i-1].device_name = " ";
    ipTable[i-1].addr =" ";
    ipTable[i-1].next->device_name = "None";
    ipTable[i-1].next->addr = " ";

    emit change(" ", " ",i-1,"r");//SIGNAL to update IPTable in NetworkMain.ui
    filled[i-1] = false;
    ipTable[i-1].next->next = NULL;//Device previously connected has no connection
    ipTable[i-1].next = NULL;//Disconnect device
}

//SLOTS FOR UPDATING TABLE IN NETWORKMAIN.UI TO ADD AND REMOVE DEVICES
void Router::add(QString device){
    addDevice(device);
}

void Router::remove(int i){
    removeDevice(i);
}
