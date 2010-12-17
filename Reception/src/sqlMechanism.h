#ifndef SQLMECHANISM_H
#define SQLMECHANISM_H
#include "sqlconnectionsingleton.h"

class SQLMechanism
{
    protected:

    QSqlDatabase db;
    private:
        SqlConnection *SqlConnec;

    public:
        SQLMechanism();
        ~SQLMechanism();

        QSqlQuery myQuery();
};

#endif // SQLMECHANISM_H
