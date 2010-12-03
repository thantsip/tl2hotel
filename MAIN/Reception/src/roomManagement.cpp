#include "roomManagement.h"



/**
  *constructor
 */
RoomManagement::RoomManagement()
{

}

/**
  *destructor
  */
RoomManagement::~RoomManagement()
{
}

/**
  *Creates new entry in Room table
  */
void RoomManagement::newRoom(Room room)
{
    if(RoomManagement::checkInData(room))
        {
            sqlMechanism.execQuery("insert into Rooms values('"+QString("%1").arg(room.getRoomNumber())+"', '"+QString("%1").arg(room.getRoomFloor())+"','"+QString("%1").arg(room.getCapacity())+"','') ");
        }
}


/**
  *Deletes selected entry in Room table
  */
void RoomManagement::deleteRoom(Room room)
{

    sqlMechanism.execQuery("delete from Rooms where RoomNumber = '"+QString("%1").arg(room.getRoomNumber())+"' ");
}

/**
  *Updates an entry in Room table
  */
void RoomManagement::editRoom(Room room)
{
   sqlMechanism.execQuery("update Rooms SET RoomNumber='"+QString(room.getRoomNumber())+"', RoomFloor='"+QString(room.getRoomFloor())+"', Capacity='"+QString(room.getCapacity())+"' ) ");
}

Room RoomManagement::fetchRoom(int roomnumber)
{
    QSqlQuery fetchquery;
    int roomfloor,roomcapacity;
    QString roomextras;
    Room room;

    fetchquery = sqlMechanism.execQuery("SELECT * FROM Rooms WHERE RoomNumber='"+QString("%1").arg(roomnumber)+"'");
    while (fetchquery.next())
    {
    roomfloor = fetchquery.value(1).toInt();
    roomcapacity = fetchquery.value(2).toInt();
    roomextras = fetchquery.value(3).toString();
    }
    room.setRoomNumber(roomnumber);
    room.setRoomFloor(roomfloor);
    room.setCapacity(roomcapacity);

    return room;
}


/**
  *checks if data are correct
  */

bool RoomManagement::checkInData(Room room)
{

    int rNum=room.getRoomNumber();
    int rFloor=room.getRoomFloor();
    int cpct=room.getCapacity();
    bool ret=false;

    if(0==rNum)
            {
                QMessageBox::warning(0,"Input Data Error","Check the Room Number");
                ret = false;
            }
    else
    {
            ret = true;
    }

    if(0==rFloor)
    {

                   QMessageBox::warning(0,"Input Data Error","Check the Room Floor");
                    ret = false;

    }
    else {
        ret = true;
    }

    if(0== cpct)
        {
        QMessageBox::warning(0,"Input Data Error","Check the Capacity");
        ret = false;

        }
    else{
        ret= true;

    }
    return ret;
}


