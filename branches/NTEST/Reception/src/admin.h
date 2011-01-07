#ifndef ADMIN_H
#define ADMIN_H

#include <QString>
#include <QSqlQuery>
#include <QChar>
#include <QVariant>

#include "sqlMechanism.h"
#include "user.h"

class Admin : public User
{
private:
    User user;
    SQLMechanism sqlMechanism;
public:
    Admin();
    void createUser(User user);
    void editUser(User user);
    void deleteUser(User user);
    bool CheckInData(User user);


    ~Admin();
};

#endif // ADMIN_H
