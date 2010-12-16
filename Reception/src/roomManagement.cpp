
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
        QSqlQuery fetchquery;
        fetchquery = sqlMechanism.myQuery();
        fetchquery.prepare("SELECT * FROM Rooms WHERE RoomNumber= :rNum");
        fetchquery.bindValue(":rNum",room.getRoomNumber());
        fetchquery.exec();

        while(fetchquery.next())
        {
            QMessageBox::information(0,"Input Data Error","This Number exists");
        }

    if(RoomManagement::checkInData(room))
        {
            QSqlQuery query;
            query = sqlMechanism.myQuery();
            query.prepare("insert into Rooms (RoomNumber,RoomFloor,Capacity,Extras)"
                                           "values(:rNum, :rFloor, :capacity, :extras)");
           query.bindValue(":rNum",room.getRoomNumber());
           query.bindValue(":rFloor",room.getRoomFloor());
           query.bindValue(":capacity",room.getCapacity());
           query.bindValue(":extras","");
           query.exec();
        }
}


/**
  *Deletes selected entry in Room table
  */
void RoomManagement::deleteRoom(Room room)
{
         QSqlQuery fetchquery;
         QSqlQuery query;

        fetchquery = sqlMechanism.myQuery();
        fetchquery.prepare("SELECT * FROM RoomsReservation WHERE fkRoomId= :rNum");
        fetchquery.bindValue(":rNum",room.getRoomNumber());
        fetchquery.exec();

        while(fetchquery.next())
        {
           QMessageBox::information(0,"Input Data Error","This room can't be edited.Reservation in progress");
        }

    query = sqlMechanism.myQuery();
    query.prepare("delete from Rooms where RoomNumber = :rNum");
    query.bindValue(":rNum",room.getRoomNumber());
    query.exec();
}

/**
  *Updates an entry in Room table
  */
void RoomManagement::editRoom(Room room)
{
         QSqlQuery query;
         QSqlQuery fetchquery;


         fetchquery = sqlMechanism.myQuery();
         fetchquery.prepare("SELECT * FROM RoomsReservation WHERE fkRoomId= :rNum");
         fetchquery.bindValue(":rNum",room.getRoomNumber());
         fetchquery.exec();

         while(fetchquery.next())
         {
            QMessageBox::information(0,"Input Data Error","This room can't be edited.Reservation in progress");
         }

    query = sqlMechanism.myQuery();
    query.prepare("update Rooms SET RoomNumber= :rNum, RoomFloor= :rFloor, Capacity= :capacity WHERE RoomNumber=:rNum");
    query.bindValue(":rNum",room.getRoomNumber());
    query.bindValue(":rFloor",room.getRoomFloor());
    query.bindValue(":capacity",room.getCapacity());
    query.exec();
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
   fetchquery = sqlMechanism.myQuery();
   fetchquery.prepare("SELECT * FROM Rooms WHERE RoomNumber= :rNum");
   fetchquery.bindValue(":rNum",roomnumber);
   fetchquery.exec();

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
    if(roomfree==1)
    {
        room.setFree(true);
    }
    else
    {
        room.setFree(false);
    }

    return room;
}


/**
  * returns all rooms from the db into a vector
  */

  vector<Room> RoomManagement::fetchAllRooms()
  {

    int roomfree;
    QSqlQuery fetchquery;
    Room room;
    vector<Room> roomVector;
    fetchquery = sqlMechanism.myQuery();
    fetchquery.prepare(" SELECT * FROM Rooms ");
    fetchquery.exec();

    while(fetchquery.next())
    {


         room.setRoomNumber(fetchquery.value(0).toInt());
         room.setRoomFloor( fetchquery.value(1).toInt());
         room.setCapacity(fetchquery.value(2).toInt());
         roomfree = fetchquery.value(3).toInt();
         if(roomfree==1)
         {
             room.setFree(true);
         }
         else
         {
             room.setFree(false);
         }

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

         int roomfree;
         QSqlQuery fetchquery;

         Room room;


         vector<Room> roomVector;
         fetchquery = sqlMechanism.myQuery();
         fetchquery.prepare("SELECT * FROM Rooms WHERE Capacity= :capacity");
         fetchquery.bindValue(":capacity",capacity);
         fetchquery.exec();

         /**
           *while there is a available row set the data into a room object
           *and then push it on a vector
           */
         while(fetchquery.next())
          {

               room.setRoomNumber(fetchquery.value(1).toInt());
               room.setRoomFloor( fetchquery.value(2).toInt());
               room.setCapacity(fetchquery.value(3).toInt());
               roomfree = fetchquery.value(3).toInt();
               if(roomfree==1)
               {
                   room.setFree(true);
               }
               else
               {
                   room.setFree(false);
               }
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
         int roomfree;
         QSqlQuery fetchquery;
         Room room;
         vector<Room> froomVector;
         fetchquery = sqlMechanism.myQuery();
         fetchquery.prepare("SELECT * FROM Rooms WHERE RoomFloor= :rFloor");
         fetchquery.bindValue(":rFloor",floor);
         fetchquery.exec();

         /**
           *while there is a available row set the data into a room object
           *and then push it on a vector
           */
         while(fetchquery.next())
          {

               room.setRoomNumber(fetchquery.value(1).toInt());
               room.setRoomFloor( fetchquery.value(2).toInt());
               room.setCapacity(fetchquery.value(3).toInt());
               roomfree = fetchquery.value(3).toInt();
               if(roomfree==1)
               {
                   room.setFree(true);
               }
               else
               {
                   room.setFree(false);
               }
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

/**
  *checks if data are correct
  */


/**
  *getFree-> returns the status of the room (free or not)[true/false]
  */
bool RoomManagement::getStatus(int roomNumber)
{
   QSqlQuery freeQuery;
   freeQuery = sqlMechanism.execQuery("SELECT * FROM RoomsReservation WHERE RoomNumber='"+QString("%1").arg(roomNumber)+"'");
   while(freeQuery.next())
    {
       if(freeQuery.value(0).toInt()==1)
        {
            return true;
        }
        else
        {
            return false;
        }

    }
  return false;
}
