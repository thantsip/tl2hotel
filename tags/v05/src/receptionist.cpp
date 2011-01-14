#include "receptionist.h"

/**

 *Receptionist class

 *This class holds the receptionist's information

 */



 /*

  *default receptionist constructor

  */

Receptionist::Receptionist()
{
     dailyFund= 0;
}



 /*

  *receptionist destructor

  */

Receptionist::~Receptionist() {}



/*

 *constructor with all class atributes

 *@param dailyFund is a double variable


 */


Receptionist::Receptionist(double dFund)

{


    dailyFund = dFund;

}



/**sets the daily fund of the user

 *@param dailyFund is a QString variable

 */


void Receptionist::setFund(double dFund)

{

    dailyFund = dFund;

}



/**returns the daily fund of the user

 *@param dailyFund is a double argument

 *@return the daily fund result

 */


double Receptionist::getFund()

{

    return dailyFund;

}



/**
  *checks if Admins data are correct
  *@param user is a User class item
  *@param cName is a string variable
  *@param cSurename is a string variable
  *@param cUsername is a string variable
  *@param cPasswrd is a string variable
  *@param cRole is a string variable
  *@param cFund is a double variable
  *@param ret is a boolean
  *@return the statement whether the data is correct or not, true: correct, false: incorrect
  */
bool Receptionist::checkInData(User user){

    QString cName = user.getName();
    QString cSurname = user.getSurname();
    QString cUsername = user.getUsername();
    QString cPassword = user.getPassword();
    QString cRole = user.getRole();
    double cFund = getFund();

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

    if(! 0 <= cFund)
    {
        ret = true;
    }
    else
    {
        QMessageBox::warning(0,"Input Data Error","Check the Fund");
        ret = false;
    }

    return ret;
}
