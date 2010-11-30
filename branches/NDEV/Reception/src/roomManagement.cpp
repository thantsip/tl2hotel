#include "roomManagement.h"

/**
  *constructor
 */
RoomManagement::RoomManagement()
{

}
RoomManagement::~RoomManagement()
{
}

/**
  *Creates new entry in Room table
  */
void RoomManagement::newRoom(int id, int RoomNumber, int RoomFloor, int Capacity,QString extras)
{
    sqlMechanism.execQuery("insert into Rooms values('"+QString("%1").arg(id)+"','"+QString("%1").arg(RoomNumber)+"', '"+QString("%1").arg(RoomFloor)+"','"+QString("%1").arg(Capacity)+"','"+extras+"') ");
}


/**
  *Deletes selected entry in Room table
  */
void RoomManagement::deleteRoom(int id)
{
  sqlMechanism.execQuery("delete from Rooms where prIdRoom='"+QString(id)+"'");
}

/**
  *Updates an entry in Room table
  */
void RoomManagement::editRoom(int id, int RoomNumber, int RoomFloor, int Capacity,QString extras)
{
   sqlMechanism.execQuery("update Rooms SET prIdRoom='"+QString(id)+"', RoomNumber='"+QString(RoomNumber)+"', RoomFloor='"+QString(RoomFloor)+"', Capacity='"+QString(Capacity)+"' ,Extras='"+extras+"' ) ");
}
