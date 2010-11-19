#ifndef DATABASEMANAGER_H
#define DATABASEMANAGER_H


#include <QObject>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QMessageBox>
#include <QString>
#include <QFile>



static const QString dbDriverStr = "QSQLITE";
static const QString dbFileNameStr = "database.s3db";

/* GUI string messages. */
static const QString dbConnectErrorStr       = QObject::tr("Database Connection Error");
static const QString dbDriverNotExistStr     = QObject::tr("Database driver is not available.");
static const QString dbCannotOpenStr         = QObject::tr("The database cannot open.");
static const QString dbCreationStr           = QObject::tr("Creating a database instance failed");

/*
static const QString splashDBDriversStr      = QObject::tr("Searching Available Database Drivers...");
static const QString splashDBConnectionStr   = QObject::tr("Establishing Database Connection...");
static const QString splashSearchDBStr       = QObject::tr("Searching Application's Database...");
static const QString splashCreateDBSchemaStr = QObject::tr("Creating Default Database Schema...");
static const QString splashFillDBStr         = QObject::tr("Filling Database Default Data...");
static const QString splashAppStartStr       = QObject::tr("Opening Parking Manager Application...");
*/


class DatabaseManager
{

protected:

    /*declare a sqldatabase object*/
    QSqlDatabase db;

public:

    bool dbConnect();
    bool dbDisconnect();
    bool dbCreateInstance();
    bool removeDB();
    bool isDBExist();

    /*insert and delete from database(temp)*/
    bool insertCustomer( int aem,QString name, QString surname);
    bool deleteCustomer(int aem);



};

#endif // DATABASEMANAGER_H
