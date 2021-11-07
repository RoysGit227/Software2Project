#include "router.h"

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
            tmp = &ipTable[i];//set node that will be stored in device to hold information of connection
            emit Added(tmp->device_name, tmp->addr,i);//SIGNAL to update IPTable in NetworkMain.ui
            return *tmp;
        }
    }
    return *tmp;
}

const Node& Router::removeDevice(Node& tmp){
    tmp.next->device_name = "None";
    tmp.next->addr =" ";
    //emit Added(tmp.next->device_name, tmp.next->addr,i);//SIGNAL to update IPTable in NetworkMain.ui
    tmp.next->next = NULL;
    tmp.next = NULL;
    return tmp;
}
