#include "router.h"

Router::Router(QObject *parent) : QObject(parent)
{
    for (int i = 0; i < 5; i++) {
        Node point(i);
        ipTable[i] = point;
    }
}

Router::~Router(){}

const QString& Router::getDeviceName(int i) const{return ipTable[i].device_name;}
const QString& Router::getIPAddress(int i) const{return ipTable[i].addr;}

const Node& Router::addDevice(const QString& nm){
    Node* tmp = new Node();
    tmp->device_name = nm;

    for(int i = 0; i < 5; i++){
        if(!(filled[i])){
            filled[i] = true;
            ipTable[i].device_name = nm;
            tmp = &ipTable[i];
            emit Added(tmp->device_name, tmp->addr,i);
            return *tmp;
        }
    }
    return *tmp;
}

const Node& Router::removeDevice(Node& tmp){
    tmp.next->device_name = "None";
    tmp.next->next = NULL;
    tmp.next = NULL;
    return tmp;
}
