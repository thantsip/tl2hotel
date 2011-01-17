/** @file   tpricemanagement.h
 *  @brief  pricemanagement Unit Test Header
 *  @author Georgomitros Konstantinos
 *
 *  This is the unit test for the "pricemanagement" class.
 */


#ifndef TPRICEMANAGEMENT_H
#define TPRICEMANAGEMENT_H


#include "pricemanagement.h"
#include <QtTest>
#include <QObject>
#include <vector>



class TpriceManagement: public QObject
{
  Q_OBJECT


private slots:

    /**@brief----------------------------------methods explained 
      *
      */  			
		

    /**@brief Adding capacity and price to new-established Rooms
       * @brief method "TnewCharge()" checing for :
        *A) simple insertion pass
        *B) valid  insertion (no double entries) pass
        *c) Zero   insertion values
        *D) Random insertion values
         */
             
            void TnewCharge();


    /**@brief Simple as its sounds
       * @brief method "TdeleteCharge()" adding  a charge and deletes it, after checking for "leftbehinds"
        */

            void TdeleteCharge();
   


   
    /**@briefmethod "TeditCharge()"   checking if a charge changed properly
       *
        */
             void TeditCharge();

   
    
    /**@brief checking container Object for information
       * @brief method "TfetchAllCharges()" checks the container object for the  correct information already stored
        * inside it
         */

             void TfetchAllCharges();



};

#endif // TPRICEMANAGEMENT_H






