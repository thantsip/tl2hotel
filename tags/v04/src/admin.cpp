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
