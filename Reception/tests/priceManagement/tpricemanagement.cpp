#include "tpricemanagement.h"

#include <QMap>




void TpriceManagement::TfetchAllCharges()
{

   int ret=0;

    PriceManagement pm;
    QMap<int, double>map;


    pm.newCharge("21","31");  //creates some records to check if map is not empty
    pm.newCharge("22","32");
    pm.newCharge("23","33");



     map=pm.fetchAllCharges();





     if(map.contains(21) && map.contains(22) && map.contains(23) )
            ret=0;
        else ret=1;










 QVERIFY (0==ret);
}

void TpriceManagement::TnewCharge()
{
    PriceManagement pm;
     QMap<int, double>map;



    int A,A2,B,C;                      //States to check
 pm.newCharge("4","30");
 pm.newCharge("4","30");
 pm.newCharge("0","0");
 pm.newCharge("+","*");

map=pm.fetchAllCharges();

    if(map.contains(4))           //simple input checking
           A = 0;





    if(map.contains(4))           //double entry checking
           A2 = 1;



    if(map.contains(0))           // zero value  checking
           B=1;



    if( map.contains( '(' ))      // simple wild Cards checing
           C = 1;
    else C=0;







QVERIFY (0==A && 1==A2 && 0==B && 0==C);
}

void TpriceManagement::TdeleteCharge()
{
   int ret=0;

    PriceManagement pm;


    pm.newCharge("123","33");
    pm.deleteCharge("123");

    QMap<int, double>map;
    map=pm.fetchAllCharges();






   if(map.contains(123))          //check if value has erased corectly from DataBase
     ret=1;


QVERIFY (0==ret);
}

void TpriceManagement::TeditCharge()
{ 
    int ret=0;

    PriceManagement pm;
    QMap<int, double>map;


    pm.newCharge("100","200");   // temp value to check
     map=pm.fetchAllCharges();


    if(map.contains(100))
        ret=0;



   pm.editCharge("100","201");

    map=pm.fetchAllCharges(); // checked if changed by reloading the map

    if(map.contains(100) && (map[100]==201) )
       ret=0;
     else ret=1;





QVERIFY (0==ret);
}



QTEST_MAIN (TpriceManagement)
