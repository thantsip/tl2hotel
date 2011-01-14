#include "usermanagement.h"

UserManagement::UserManagement()
{
}

void UserManagement::newUser(User user)
{
    QSqlQuery fetchquery;
    fetchquery = sqlMechanism.myQuery();
    fetchquery.prepare("SELECT * FROM Users WHERE Username= :userN");
    fetchquery.bindValue(":UserN",user.getUsername());
    fetchquery.exec();

    while(fetchquery.next())
    {
        QMessageBox::information(0,"Input Data Error","This username exists");
        return;
    }

    if(UserManagement::checkInData(user))
       {
         QSqlQuery query;
         query = sqlMechanism.myQuery();
         query.prepare("INSERT INTO Users (Name,Surname,Username,Password,Role) VALUES(:name, :surname,:uname,:pass, :role)");
         query.bindValue(":name", user.getName());
         query.bindValue(":surname",user.getSurname());
         query.bindValue(":uname",user.getUsername());
         query.bindValue(":pass",user.getPassword());
         query.bindValue(":role",user.getRole());
         query.exec();
        }
}

void UserManagement::deleteUser(User user)
{
    QSqlQuery query;
           query = sqlMechanism.myQuery();
           query.prepare("delete from Users where Username= :uname");
           query.bindValue(":uname",user.getUsername());
           query.exec();

}

void UserManagement::editUser(User user)
{
    QSqlQuery query;

            query = sqlMechanism.myQuery();
            query.prepare("UPDATE Users SET Name=:name, Surname=:surname ,Password=:pass WHERE Username=:uname");
            query.bindValue(":uname",user.getUsername());
            query.bindValue(":name",user.getName());
            query.bindValue(":surname",user.getSurname());
            query.bindValue(":pass",user.getPassword());
            query.exec();


}

User UserManagement::fetchUser(QString username)
{
    QSqlQuery fetchquery;
    QString customername,customersurname, cid ("");

    fetchquery = sqlMechanism.myQuery();
    fetchquery.prepare("SELECT * FROM Users WHERE Username= :uname");
    fetchquery.bindValue(":uname",username);
    fetchquery.exec();

    while (fetchquery.next())
    {
     user.setName(fetchquery.value(1).toString());
     user.setSurname(fetchquery.value(2).toString());
     user.setUsername(fetchquery.value(3).toString());
     user.setPassword(fetchquery.value(4).toString());
     user.setRole(fetchquery.value(5).toString());
    }

    return user;
}

vector<User> UserManagement::fetchAllUsers()
{
    QSqlQuery fetchquery;
    vector<User> userVector;

    fetchquery = sqlMechanism.myQuery();
    fetchquery.prepare("SELECT * FROM Users");
    fetchquery.exec();
    /**
      *while there is a available row set the data into a customer object
      *and then push it on a vector
      */
    while(fetchquery.next())
    {
        user.setName(fetchquery.value(1).toString());
        user.setSurname(fetchquery.value(2).toString());
        user.setUsername(fetchquery.value(3).toString());
        user.setPassword(fetchquery.value(4).toString());
        user.setRole(fetchquery.value(5).toString());

        userVector.push_back(user);
    }

    return userVector;

}

bool UserManagement::checkInData(User user)
{
    QString name = user.getName();
    QString surname = user.getSurname();
    QString uname = user.getUsername();
    QString pass = user.getPassword();
    QString role = user.getRole();


    bool ret=false;




    if(!name.isEmpty())
                {
                    ret = true;
                }
        else
        {
           QMessageBox::warning(0,"Input Data Error","Check the users name");
                    ret = false;
        }

        if(!surname.isEmpty())
        {

             ret=true;

        }
        else {
             QMessageBox::warning(0,"Input Data Error","Check the user surname");
                        ret = false;
        }

        if(!uname.isEmpty())
            {
                 ret=true;
            }
        else{
             QMessageBox::warning(0,"Input Data Error","Check the Username");
            ret = false;


        }
        if(!pass.isEmpty())
            {
                 ret=true;
            }
        else{
             QMessageBox::warning(0,"Input Data Error","Check the Password");
            ret = false;


        }

        if(!role.isEmpty())
            {
                 ret=true;
            }
        else{
             QMessageBox::warning(0,"Input Data Error","Check the users role");
            ret = false;

        }
          return ret;
}
