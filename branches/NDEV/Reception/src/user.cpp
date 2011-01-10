#include <user.h>

/**
 *User class
 *This class holds the user's information
 */



 /**
  *default user constructor
  */
User::User()
{
    name = "";
    surname = "";
    username = "";
    password = "";
    role = "";
}



/**
 *constructor with all class atributes
 *@param nm is an QString copy variable
 *@param surnm is an QString copy variable
 *@param usrnm is an QString copy variable
 *@param pass is an QString copy variable
 *@param rl is an QString copy variable
 */
User::User(QString nm, QString surnm, QString usrnm, QString pass, QString rl)

{
    name = nm;
    surname = surnm;
    username = usrnm;
    password = pass;
    role = rl;
}



/**
 *sets the name of the user
 *@param name is a QString variable
 */
void User::setName(QString name)
{
    this->name = name;
}



/**
 *sets the surname of the user
 *@param surname is a QString variable
 */
void User::setSurname(QString surname)
{
    this->surname = surname;
}



/**
 *sets the username of the user
 *@param username is a QString variable
 */
void User::setUsername(QString username)
{
    this->username = username;
}



/**
 *sets the password of the user
 *@param password is a QString variable
 */
void User::setPassword(QString password)

{
    this->password = password;
}



/**
 *sets the role of the user
 *@param role is a QString variable
 */
void User::setRole(QString role)

{
    this->role = role;
}



/**
 *returns the name of the user
 *@param name is a QString argument
 *@return the user name result
 */
QString User::getName()
{
    return name;
}



/**
 *returns the surname of the user
 *@param surname is a QString argument
 *@return the user surname result
 */
QString User::getSurname()
{
    return surname;
}


/**
 *returns the username of the user
 *@param username is a QString argument
 *@return the user username result
 */
QString User::getUsername()
{
    return username;
}



/**
 *returns the password of the user
 *@param password is a QString argument
 *@return the user password result
 */
QString User::getPassword()
{
    return password;
}



/**
 *returns the role of the user
 *@param role is a QString argument
 *@return the user role result
 */
QString User::getRole()
{
    return role;
}
