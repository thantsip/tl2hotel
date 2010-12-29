#ifndef USER_H

#define USER_H

#include <QString>


class User

{

    QString name;

    QString surname;

    QString username;

    QString password;

    QString role;



public:

    User();

    User(QString nm, QString surnm, QString usrnm, QString pass, QString rl);


    void setName(QString name);

    void setSurname(QString surname);

    void setUsername(QString username);

    void setPassword(QString password);

    void setRole(QString role);


    QString getName();

    QString getSurname();

    QString getUsername();

    QString getPassword();

    QString getRole();




};



#endif // USER_H
