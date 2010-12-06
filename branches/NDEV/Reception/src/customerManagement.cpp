#include "customerManagement.h"

/**
  *constructor
 */
CustomerManagement::CustomerManagement()
{
}

CustomerManagement::~CustomerManagement() {
}

/**
  *Creates new entry in Customer table
  */
void CustomerManagement::newCustomer(Customer customer)
{
    if(CustomerManagement::checkInData(customer))
       {
        sqlMechanism.execQuery("insert into Customers values('"+customer.getId()+"','"+customer.getName()+"', '"+customer.getSurname()+"') ");
       }
}

/**
  *Edits the fields from selected Customer in Customer table
  */
void CustomerManagement::editCustomer(Customer customer)
{
 sqlMechanism.execQuery("update Customers SET prIdCustomer='"+customer.getId()+"', CustomerName='"+customer.getName()+"', CustomerSurname='"+customer.getSurname()+"' ");
}

/**
  *Deletes selected entry in Customer table
  */
void CustomerManagement::deleteCustomer(Customer customer)
{
  sqlMechanism.execQuery("delete from Customers where prIdCustomer='"+customer.getId()+"'");
}

/*
*Fetch the customer with the id
*/
Customer CustomerManagement::fetchCustomer(QString id)
{
    QSqlQuery fetchquery;
    QString customername,customersurname;
    int groupid = 0;
    Customer customer;

    fetchquery = sqlMechanism.execQuery("SELECT * FROM Customers WHERE prIdCustomer='"+id+"'");
    while (fetchquery.next())
    {
    customername = fetchquery.value(1).toString();
    customersurname = fetchquery.value(2).toString();
    groupid = fetchquery.value(3).toInt();
    }
    customer.setId(id);
    customer.setName(customername);
    customer.setSurname(customersurname);
    customer.setGroupId(groupid);

    return customer;
}

/**
  *fetch all the customers and return them into a vector
  */
vector<Customer> CustomerManagement::fetchAllCustomers()
{
    QSqlQuery fetchquery;
    Customer customer;
    vector<Customer> custVector;

    fetchquery = sqlMechanism.execQuery("SELECT * FROM Customers");
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
    /**
      *return the vector that containce
      */
    return custVector;

}

/**
  *fetch the customers by id,name or surname
  */
vector<Customer> CustomerManagement::searchCustomerByValue(QString value)
{
    QSqlQuery fetchquery;
    Customer customer;
    vector<Customer> custVector;

    fetchquery = sqlMechanism.execQuery("SELECT * FROM Customers WHERE prIdCustomer='"+value+"' OR CustomerName='"+value+"' OR CustomerSurname='"+value+"'");

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
    /**
      *return the vector that containce
      */
    return custVector;


}

/**
  *checks if data are correct
  */
bool CustomerManagement::checkInData(Customer customer)
{

    QString cId=customer.getId();
    QString cName=customer.getName();
     QString cSurname=customer.getSurname();


    bool ret=false;

    /**
          *check that the customerId has no spaces
          */

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


