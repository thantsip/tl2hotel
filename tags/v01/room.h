#ifndef ROOM_H
#define ROOM_H
#include <QString>

using namespace std;

class Room
{
    int id;
    int roomNumber;
    int roomFloor;
    int Capacity;
    bool free;

public:
    Room();
    Room(int i, bool fr,int nm,int fl, int cap);

    //setters
    void setId(int i);
    void setFree(bool fr);
    void setRoomNumber(int nm);
    void setRoomFloor(int fl);
    void setCapacity(int cap);

    //getters
    int getId();
    bool getFree();
    int  getRoomNumber();
    int   getRoomFloor();
    int   getCapacity();


};

#endif // ROOM_H
