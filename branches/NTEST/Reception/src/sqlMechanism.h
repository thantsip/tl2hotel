#ifndef SQLMECHANISM_H
#define SQLMECHANISM_H
#include "sqlconnectionsingleton.h"

class SQLMechanism
{
    protected:
    /*
     *declare a QSqlDatabase object
     */
    QSqlDatabase db;
    private:
        SqlConnection *SqlConnec;

    public:
        SQLMechanism();
        ~SQLMechanism();
        bool execQuery(QString sqlQuery);
};

#endif // SQLMECHANISM_H
