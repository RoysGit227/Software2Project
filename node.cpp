#include "node.h"

Node::Node()
{
    addr = " ";
    device_name = "None";
    next = NULL;
    idx = -1;
}

Node::Node(int i)
{
    addr = "192.168.0." + QString::number(i);
    device_name = "None";
    next = NULL;
    idx = i;
}

Node& Node::operator=(const Node& a){
    if(this != &a){
        addr = a.addr;
        device_name = a.device_name;
        next = a.next;
        idx = a.idx;
    }
    return *this;
}
