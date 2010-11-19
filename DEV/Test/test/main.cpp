#include <QtGui/QApplication>
#include "mainwindow.h"
#include "databasemanager.h"
#include <QFile>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);


   /* delclare a DatabaseManager object*/
    DatabaseManager dbm;

    /* check for an existing DB (before the connection). */
    bool checkExist = dbm.isDBExist();

    /*Connecting to existing database or create a new one and connect to it*/
    dbm.dbConnect();



   /*if a new database was created check and create instance*/
    if(!checkExist)
    {
       /* Create a new database instance*/
        dbm.dbCreateInstance();
    }

    /*declare a MainWindow object*/
    MainWindow w("customers");
    w.show();



    return a.exec();
}
