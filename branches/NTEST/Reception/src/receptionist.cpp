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
