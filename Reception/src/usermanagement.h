#ifndef USERMANAGEMENT_H
#define USERMANAGEMENT_H

#include <QString>
#include <QSqlQuery>
#include <QVariant>
#include <vector>
#include <QMessageBox>
#include <QChar>
#include "sqlMechanism.h"
#include "user.h"

using namespace std;

class UserManagement
{
private:

    User user;
    SQLMechanism sqlMechanism;

public:
    UserManagement();

    void newUser(User user);
    void deleteUser(User user);
    void editUser(User user);

    User fetchUser(QString username);
    vector<User> fetchAllUsers();

    bool checkInData(User user);
};

#endif // USERMANAGEMENT_H
