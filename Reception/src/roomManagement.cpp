
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
            sqlMechanism.execQuery("insert into Rooms values('"+QString("%1").arg(room.getRoomNumber())+"', '"+QString("%1").arg(room.getRoomFloor())+"','"+QString("%1").arg(room.getCapacity())+"','"+QString("1")+"','"+QString("extra")+"') ");
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


/**
  * returns the features of the selected room
  */
Room RoomManagement::fetchRoom(int roomnumber)
{
    QSqlQuery fetchquery;
    int roomfloor,roomcapacity,roomfree;
    QString roomextras;
    Room room;

   fetchquery = sqlMechanism.execQuery("SELECT * FROM Rooms WHERE RoomNumber='"+QString("%1").arg(roomnumber)+"'");
    while (fetchquery.next())
    {
    roomfloor = fetchquery.value(1).toInt();
    roomcapacity = fetchquery.value(2).toInt();
    roomfree = fetchquery.value(3).toInt();
    roomextras = fetchquery.value(4).toString();
    }
    room.setRoomNumber(roomnumber);
    room.setRoomFloor(roomfloor);
    room.setCapacity(roomcapacity);
    room.setFree(roomfree);

    return room;
}


/**
  * returns all rooms from the db into a vector
  */

  vector<Room> RoomManagement::fetchAllRooms()
  {


    QSqlQuery fetchquery;
    Room room;
    vector<Room> roomVector;

    fetchquery = sqlMechanism.execQuery(" SELECT * FROM Rooms ");

    while(fetchquery.next())
    {


         room.setRoomNumber(fetchquery.value(0).toInt());
         room.setRoomFloor( fetchquery.value(1).toInt());
         room.setCapacity(fetchquery.value(2).toInt());
         room.setFree(fetchquery.value(3).toInt());

         roomVector.push_back(room);

    }

    return roomVector;

  }



  /**
    * returns free rooms into a vector
    */
  vector<Room> RoomManagement::fetchFreeRooms()
  {
      Room room;


      vector<Room> froomVector;

     QSqlQuery fetchquery;



     fetchquery = sqlMechanism.execQuery(" SELECT * FROM Rooms WHERE free=1 ");

     while(fetchquery.next())
     {

          room.setRoomNumber(fetchquery.value(1).toInt());
          room.setRoomFloor( fetchquery.value(2).toInt());
          room.setCapacity(fetchquery.value(3).toInt());

          froomVector.push_back( room );

     }

     return froomVector;

 }

     /**
       *search Room by Capacity
       */


    vector<Room> RoomManagement::searchRoomByCapacity(int capacity)
     {


         QSqlQuery fetchquery;

         Room room;

         vector<Room> roomVector;

         fetchquery = sqlMechanism.execQuery("SELECT * FROM Rooms WHERE Capacity='"+QString("%1").arg(capacity)+"'");

         /**
           *while there is a available row set the data into a room object
           *and then push it on a vector
           */
         while(fetchquery.next())
          {

               room.setRoomNumber(fetchquery.value(1).toInt());
               room.setRoomFloor( fetchquery.value(2).toInt());
               room.setCapacity(fetchquery.value(3).toInt());

               roomVector.push_back( room );

          }
         /**
              *return the vector that containce
              */

          return roomVector;




       }

     /**
       *fetch the room by floor
       */


     vector<Room> RoomManagement::searchRoomByFloor(int floor)
     {
         QSqlQuery fetchquery;
         Room room;
         vector<Room> froomVector;

         fetchquery = sqlMechanism.execQuery("SELECT * FROM Rooms WHERE RoomFloor='"+QString("%1").arg(floor)+"'");

         /**
           *while there is a available row set the data into a room object
           *and then push it on a vector
           */
         while(fetchquery.next())
          {

               room.setRoomNumber(fetchquery.value(1).toInt());
               room.setRoomFloor( fetchquery.value(2).toInt());
               room.setCapacity(fetchquery.value(3).toInt());

               froomVector.push_back( room );

          }

          return froomVector;




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


