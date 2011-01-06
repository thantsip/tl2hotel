#include "admin.h"


/**
  *constructor
 */
Admin::Admin()
{
}


/**
  *Deconstructor
 */
Admin::~Admin()
{
}


/**
  *Creates new entry in Users table
  *@param user is a User class item
  *@param query is an sql query
  */
void Admin::createUser(User user)
{
         QSqlQuery query;
         query = sqlMechanism.myQuery();
         query.prepare("INSERT INTO Users (Name,Surname,Username,Password,Role)"
                                          "VALUES(:Name, :Surname, :Username, :Password, :Role)");
         query.bindValue(":Name", user.getName());
         query.bindValue(":Surname", user.getSurname());
         query.bindValue(":Username", user.getUsername());
         query.bindValue(":Password", user.getPassword());
         query.bindValue(":Role", user.getRole());
         query.exec();

}


/**
  *Edits the fields from selected user in User table
  *@param user is a user class item
  *@param query is an sql query
  */
void Admin::editUser(User user)
{
     QSqlQuery query;

             query = sqlMechanism.myQuery();
             query.prepare("UPDATE Users SET Name=:Name, Surname=:Surname, Username=:Username , Password=:Password, Role=:Role WHERE userName=:userName");
             query.bindValue(":Name", user.getName());
             query.bindValue(":Surname", user.getSurname());
             query.bindValue(":Username", user.getUsername());
             query.bindValue(":Password", user.getPassword());
             query.bindValue(":Role", user.getRole());
             query.exec();



}

/**
  *Deletes selected entry in user table
  *@param user is a user class item
  *@param query is an sql query
  */
void Admin::deleteUser(User user)
{
     QSqlQuery query;


            query = sqlMechanism.myQuery();
            query.prepare("delete from Users where UserName= :Username");
            query.bindValue(":Username",user.getUsername());
            query.exec();
 }


/**
  *checks if Admins data are correct
  *@param user is a User class item
  *@param cName is a string variable
  *@param cSurename is a string variable
  *@param cUsername is a string variable
  *@param cPasswrd is a string variable
  *@param cRole is a string variable
  *@param ret is a boolean
  *@return the statement whether the data is correct or not, true: correct, false: incorrect
  */
bool Admin::CheckInData(User user){

    QString cName = user.getName();
    QString cSurname = user.getSurname();
    QString cUsername = user.getUsername();
    QString cPassword = user.getPassword();
    QString cRole = user.getRole();

    bool ret=false;

    if(!cName.isEmpty())
    {
        ret = true;
    }
    else
    {
        QMessageBox::warning(0,"Input Data Error","Check the Name");
        ret = false;
    }


    if(!cSurname.isEmpty())
    {
        ret = true;
    }
    else
    {
        QMessageBox::warning(0,"Input Data Error","Check the Surename");
        ret = false;
    }


    if(!cUsername.isEmpty())
    {
        ret = true;
    }
    else
    {
        QMessageBox::warning(0,"Input Data Error","Check the Username");
        ret = false;
    }


    if(!cPassword.isEmpty())
    {
        ret = true;
    }
    else
    {
        QMessageBox::warning(0,"Input Data Error","Check the Password");
        ret = false;
    }


    if(!cRole.isEmpty())
    {
        ret = true;
    }
    else
    {
        QMessageBox::warning(0,"Input Data Error","Check the Role");
        ret = false;
    }

    return ret;
}
