#ifndef NODE_H
#define NODE_H
#include <QString>

//Node class used between router and devices connected
class Node {
public:
    Node();

    Node(int i);

    Node& operator=(const Node& a);

private:
    QString addr;
    QString device_name;
    Node* next;
    int idx;

    friend class Router;
    friend class NetworkMain;
    friend class RaspberryPi;
    friend class Attacker;
};

#endif // NODE_H
