#ifndef ROOM_H
#define ROOM_H
#include <QString>

using namespace std;

class Room
{
    int id;
    QString type;
    bool free;
    QString extras;

public:
    Room();
    Room(int i,QString t,bool fr,QString ext);
    ~Room();

    //setters
    void setId(int i);
    void setType(QString t);
    void setFree(bool fr);
    void setExtras(QString ext);

    //getters
    int getId();
    QString getType();
    bool getFree();
    QString getExtras();


};

#endif // ROOM_H
