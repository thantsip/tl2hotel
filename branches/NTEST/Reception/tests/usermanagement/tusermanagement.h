/** @file   tusermanagement.h
 *  @brief  usermanagement Unit Test Header
 *  @author Georgomitros Konstantinos
 *
 *  This is the unit test for the "usermanagement" class.
 */


#ifndef TUSERMANAGEMENT_H
#define TUSERMANAGEMENT_H


#include "usermanagement.h"
#include <QtTest>
#include <QObject>
#include <vector>



class TuserManagement: public QObject
{
  Q_OBJECT


private slots:

    /**@brief----------------------------------methods explained 
      *
      */  			
	
    
    /**@brief
       * Testing setup constructor
        */         
             
              void Testconstructors();


    
    /**@brief
       * Testing if new users register properly to database
        */ 
     
             void TestnewUser();

   
    /**@brief
       * Testing the attempt to delete elready existin user or not existing 
        */ 

             void TestdeleteUser();


    
    /**@brief
       * Testing the scenario of editing a user or a not user
        */ 
	
            void TesteditUser();
   

    
    /**@brief----------------------------------methods explained 
       * Testing if user exists or not
        */ 

   
  	    void TestfetchUser();
    

     /**@brief----------------------------------methods explained 
       * Try loading all users in a container object and checks if is empty
        */ 

            void TestfetchAllUsers();


    
     /**@brief----------------------------------methods explained 
       * last the valid input scenario...
        */ 
         
	   void TestcheckInData();


    

         


};

#endif // TUSERMANAGEMENT_H





