#ifndef ROOM_H
#define ROOM_H
#include <QString>

using namespace std;

class Room
{
    int roomNumber;
    int roomFloor;
    int Capacity;
    

public:
    Room();
    Room(int nm,int fl, int cap);


    void setRoomNumber(int nm);
    void setRoomFloor(int fl);
    void setCapacity(int cap);


    int  getRoomNumber();
    int  getRoomFloor();
    int  getCapacity();


};

#endif // ROOM_H