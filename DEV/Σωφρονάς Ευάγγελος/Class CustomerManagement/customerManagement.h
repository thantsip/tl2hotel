/**
 *Contains Class CustomerManagement
 */

#ifndef CUSTOMERMANAGEMENT_H
#define CUSTOMERMANAGEMENT_H
#include “SQLMechanism.h”
#include “Customer.h”


/**
  *Creates new customers in the database or edits/deletes and already existing customer in the database
  */


class CustomerManagement
{

private:
     Customer customer;
     SQLMechanism sqlMechanism;

public:
    CustomerManagement();
    newCustomer();
    deleteCustomer();
    editCustomer();


/**
  *destructor
  */
   ~CustomerManagement();
};

#endif // CUSTOMERMANAGEMENT_H
