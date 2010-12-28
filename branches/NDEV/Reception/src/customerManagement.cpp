#include "customerManagement.h"

/**
  Customer Management class
  *Creates new customers in the database or edits/deletes and already existing customer in the database
  */

/**
  *constructor
 */
CustomerManagement::CustomerManagement()
{
}

CustomerManagement::~CustomerManagement() 
{
}

/**
  *Creates new entry in Customer table
  *@param customer is a customer class item
  *@param fetchquery is an sql query
  *@param query is an sql query
  */
void CustomerManagement::newCustomer(Customer customer)
{
    QSqlQuery fetchquery;
    fetchquery = sqlMechanism.myQuery();
    fetchquery.prepare("SELECT * FROM Customers WHERE prIdCustomer= :custId");
    fetchquery.bindValue(":custId",customer.getId());
    fetchquery.exec();

    while(fetchquery.next())
    {
        QMessageBox::information(0,"Input Data Error","This ID exists");
    }

    if(CustomerManagement::checkInData(customer))
       {
         QSqlQuery query;
         query = sqlMechanism.myQuery();
         query.prepare("INSERT INTO Customers (prIdCustomer,CustomerName,CustomerSurname,GroupId)"
                                          "VALUES(:custId, :custName, :custSurname, :groupId)");
         query.bindValue(":custId", customer.getId());
         query.bindValue(":custName",customer.getName());
         query.bindValue(":custSurname",customer.getSurname());
         query.bindValue(":groupId",customer.getGroupId());
         query.exec();
        }
}

/**
  *Edits the fields from selected Customer in Customer table
  *@param customer is a customer class item
  *@param query is an sql query
  *@param fetchquery is an sql query
  */
void CustomerManagement::editCustomer(Customer customer)
{
     QSqlQuery query;
     QSqlQuery fetchquery;

     fetchquery = sqlMechanism.myQuery();
     fetchquery.prepare("SELECT * FROM RoomsReservation WHERE fkCustomerId= :custId");
     fetchquery.bindValue(":custId",customer.getId());
     fetchquery.exec();

     fetchquery.next();
     if(fetchquery.isValid())
        {
            QMessageBox::information(0,"Input Data Error","This customer can't be edited.Reservation in progress");
        }
     else
         {
             query = sqlMechanism.myQuery();
             query.prepare("UPDATE Customers SET CustomerName=:custName, CustomerSurname=:custSurname ,GroupId=:custGroupId WHERE prIdCustomer=:custId");
             query.bindValue(":custId",customer.getId());
             query.bindValue(":custName",customer.getName());
             query.bindValue(":custSurname",customer.getSurname());
             query.bindValue(":custGroupId",customer.getGroupId());
             query.exec();
         }


}

/**
  *Deletes selected entry in Customer table
  *@param customer is a customer class item
  *@param query is an sql query
  *@param fetchquery is an sql query
  */
void CustomerManagement::deleteCustomer(Customer customer)
{
     QSqlQuery fetchquery;
     QSqlQuery query;

    fetchquery = sqlMechanism.myQuery();
    fetchquery.prepare("SELECT * FROM RoomsReservation WHERE fkCustomerId= :custId");
    fetchquery.bindValue(":custId",customer.getId());
    fetchquery.exec();

    fetchquery.next();
    if(fetchquery.isValid())
        {
           QMessageBox::information(0,"Input Data Error","This customer can't be deleted.Reservation in progress");
        }
    else
        {
            query = sqlMechanism.myQuery();
            query.prepare("delete from Customers where prIdCustomer= :custId");
            query.bindValue(":custId",customer.getId());
            query.exec();
        }
}

 /**
 *Fetches the customer with the selected id
 *@param id is a string argument
 *@param fetchquery is an sql query
 *@param groupid is an integer variable
 *@param customer is a customer class item
 *@param customername is a string variable
 *@return the selected customer information
 */
Customer CustomerManagement::fetchCustomer(QString id)
{
    QSqlQuery fetchquery;
    QString customername,customersurname, cid ("");
    int groupid = 0;
    Customer customer;
    fetchquery = sqlMechanism.myQuery();
    fetchquery.prepare("SELECT * FROM Customers WHERE prIdCustomer= :custId");
    fetchquery.bindValue(":custId",id);
    fetchquery.exec();

    while (fetchquery.next())
    {
	 cid = fetchquery.value(0).toString();
     customername = fetchquery.value(1).toString();
     customersurname = fetchquery.value(2).toString();
     groupid = fetchquery.value(3).toInt();
    }
    customer.setId(cid);
    customer.setName(customername);
    customer.setSurname(customersurname);
    customer.setGroupId(groupid);

    return customer;
}

/**
  *fetches all the customers and return them into a vector
  *@param fetchquery is an sql query
  *@param customer is a customer class item
  *@param custVector is a vector containing all customers
  *@return the vector result

  */
vector<Customer> CustomerManagement::fetchAllCustomers()
{
    QSqlQuery fetchquery;
    Customer customer;
    vector<Customer> custVector;

    fetchquery = sqlMechanism.myQuery();
    fetchquery.prepare("SELECT * FROM Customers");
    fetchquery.exec();
    /**
      *while there is a available row set the data into a customer object
      *and then push it on a vector
      */
    while(fetchquery.next())
    {
        customer.setId(fetchquery.value(0).toString());
        customer.setName(fetchquery.value(1).toString());
        customer.setSurname(fetchquery.value(2).toString());
        customer.setGroupId(fetchquery.value(3).toInt());

        custVector.push_back(customer);
    }

    return custVector;

}

/**
  *fetches the customers by id,name or surname
  *@param fetchquery is an sql query
  *@param customer is a customer class item
  *@param custVector is a vector containing all customers having the selected value
  *@return the vector containing the customers with the selected value
  */
vector<Customer> CustomerManagement::searchCustomerByValue(QString value)
{
    QSqlQuery fetchquery;
    Customer customer;
    vector<Customer> custVector;

    fetchquery = sqlMechanism.myQuery();
    fetchquery.exec("SELECT * FROM Customers WHERE prIdCustomer LIKE '%"+value+"%' OR CustomerName LIKE '%"+value+"%' OR CustomerSurname LIKE '%"+value+"%'");
    //fetchquery.prepare("SELECT * FROM Customers WHERE prIdCustomer LIKE :value OR CustomerName LIKE :value OR CustomerSurname LIKE :value");
    //fetchquery.bindValue(":value",value);
    //fetchquery.exec();
 
    while(fetchquery.next())
    {
        customer.setId(fetchquery.value(0).toString());
        customer.setName(fetchquery.value(1).toString());
        customer.setSurname(fetchquery.value(2).toString());
        customer.setGroupId(fetchquery.value(3).toInt());

        custVector.push_back(customer);
    }

    return custVector;


}

/**
  *checks if customer data is correct
  *@param customer is a customer class item
  *@param cId is a string variable
  *@param cName is a string variable
  *@param cSurname is a string variable
  *@param ret is a boolean
  *@return the statement whether the data is correct or not
  */
bool CustomerManagement::checkInData(Customer customer)
{

    QString cId=customer.getId();
    QString cName=customer.getName();
    QString cSurname=customer.getSurname();


    bool ret=false;


          

    if(!cId.isEmpty()) 
                {
                    ret = true;
                }
        else
        {
           QMessageBox::warning(0,"Input Data Error","Check the Customer Id");
                    ret = false;     
        }

        if(!cName.isEmpty())
        {

             ret=true;          

        }
        else {
             QMessageBox::warning(0,"Input Data Error","Check the Customer Name");
                        ret = false;
        }

        if(!cSurname.isEmpty()) 
            {
                 ret=true;
            }
        else{
             QMessageBox::warning(0,"Input Data Error","Check the Customer Surname");
            ret = false;


        }
        return ret;
    }


