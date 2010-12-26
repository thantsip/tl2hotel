#ifndef SQLCONNECTIONSINGLETON_H
#define SQLCONNECTIONSINGLETON_H

#include <QSqlDatabase>
#include <QMessageBox>
#include <QString>
#include <QSqlQuery>
#include <QProgressDialog>

#include "filehandler.h"

/*
 * declare DB driver and filename.
 */
static const QString dbDriverStr = "QSQLITE";
static const QString dbFileNameStr = "database.s3db";
static const int PBAR_MAX_STEPS =7;

/*
 * GUI string messages.
 */
static const QString dbConnectErrorStr       = QObject::tr("Database Connection Error");
static const QString dbDriverNotExistStr     = QObject::tr("Database driver is not available.");
static const QString dbCannotOpenStr         = QObject::tr("The database cannot open.");
static const QString dbCreationStr           = QObject::tr("Creating a database instance failed");


class SqlConnection
{
  private:
    static SqlConnection * _instance;

  protected:
    SqlConnection();

    /*
     *declare a QSqlDatabase object
     */
    QSqlDatabase db;
    /*
     *declare a FileHandler object
     */
    FileHandler dbFile;

  public:
    static SqlConnection * getInstance();

    bool dbConnect();
    bool isConnected();
    bool dbDisconnect();
    bool isDbExist();
    bool dbRemove();
    bool dbCreateInstance();
    ~SqlConnection();
};

#endif // SQLCONNECTIONSINGLETON_H
