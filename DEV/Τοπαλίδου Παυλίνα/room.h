#ifndef ROOM_H
#define ROOM_H
#include <QString>

using namespace std;

class Room
{
    int id;
    QString type;
    bool free;

public:
    Room();
    Room(int i,QString t,bool fr);

    //setters
    void setId(QString i);
    void setType(QString t);
    void setFree(bool fr);

    //getters
    QString getId();
    int   getName();
    bool getFree();


};

#endif // ROOM_H
