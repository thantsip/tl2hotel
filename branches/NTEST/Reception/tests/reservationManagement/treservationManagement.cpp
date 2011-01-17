#include "treservationManagement.h"




QString name="kostasas";
QString sname="georgomitros";
QString id="004";

QString dateFrom="24102010";
QString date2="28102010";

Customer customer(id,name,sname,12);
Room room(314,2,2);







void TReservationManagement::testReservationManagementDefault()
{
   ReservationManagement r0;





   QVERIFY(0 == r0.getReservationId() &&
         "" == r0.getDateFrom()     &&
         "" == r0.getDateTo());

}

void TReservationManagement::testReservationManagement()
{
    ReservationManagement r1(1313,dateFrom,date2);



    QVERIFY(1313 == r1.getReservationId() &&
          dateFrom == r1.getDateFrom()    &&
          date2    == r1.getDateTo());

}
void TReservationManagement::test_get_set_ReservationId()
{

    ReservationManagement r2;

    r2.setReservationId(1);



    QVERIFY(1== r2.getReservationId());


} 

void TReservationManagement::test_set_get_DateFrom()
{
   ReservationManagement r3;
   r3.setDateFrom(dateFrom);



   QVERIFY(r3.getDateFrom() == dateFrom );


}

void TReservationManagement::test_set_get_DateTo()
{
    ReservationManagement r4;
    r4.setDateTo(date2);



    QVERIFY(r4.getDateTo() == date2);
}

void TReservationManagement::testroomReservation()
{
    QString dateFrom_="22102010";
    QString date_="27122010";

    RoomManagement Rm;
    CustomerManagement Cm;
    Rm.newRoom(room);

    Customer cust2("11","panos","katos",1);
    Cm.newCustomer(customer);
    Cm.newCustomer(cust2);

    ReservationManagement nores;

     // nores.setReservationId(001);
      nores.setDateFrom(dateFrom_);
      nores.setDateTo(date2);

      nores.checkInData(room,customer);
      nores.roomReservation(dateFrom_,date_,room,customer);

      nores.checkInData(room,cust2);
      nores.roomReservation(dateFrom,date2,room,cust2);





 QVERIFY(2 == 2);

}
void TReservationManagement::testcheckInData()
{
     int ret=0;

     Customer Tcustomer("11_","NONAME","NOSURNAME",13);
     Room Troom(0,0,0);



     ReservationManagement reservation;
     reservation.checkInData(Troom,Tcustomer);

     if(Tcustomer.getId() == "11_1" || Troom.getRoomNumber()==0)
          ret=0;
       else ret=1;

     QVERIFY(0==ret);


}
void TReservationManagement::testroomCheckout()
{
    ReservationManagement a;
    double f;
  a.setDateFrom(dateFrom);
  a.setDateTo(date2);
  a.setReservationId(5);

    f=a.roomCheckout(314);




    QMessageBox msgBox;
    msgBox.setText(QString("%1").arg(f));
    msgBox.show();

   QVERIFY(140.00 == f && 0.00!=f);

}


QTEST_MAIN (TReservationManagement)
