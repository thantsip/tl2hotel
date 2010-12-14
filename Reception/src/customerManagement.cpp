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
    QSqlQuery fetchquery;
    fetchquery = sqlMechanism.myQuery();
    fetchquery.prepare("SELECT * FROM Customers WHERE prIdCustomer= :custId");
    fetchquery.bindValue(":custId",customer.getId());
    fetchquery.exec();

    while(fetchquery.next())
    {
        QMessageBox::warning(0,"Input Data Error","This ID exists");
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
  */
void CustomerManagement::editCustomer(Customer customer)
{
 QSqlQuery query;
 query = sqlMechanism.myQuery();
 query.prepare("UPDATE Customers SET prIdCustomer=:custId, CustomerName=:custName, CustomerSurname=:custSurname WHERE prIdCustomer=:custId");
 query.bindValue(":custId",customer.getId());
 query.bindValue(":custName",customer.getName());
 query.bindValue(":custSurname",customer.getSurname());
 query.exec();
}

/**
  *Deletes selected entry in Customer table
  */
void CustomerManagement::deleteCustomer(Customer customer)
{
    QSqlQuery query;
    query = sqlMechanism.myQuery();
    query.prepare("delete from Customers where prIdCustomer= :custId");
    query.bindValue(":custId",customer.getId());
    query.exec();
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
    fetchquery = sqlMechanism.myQuery();
    fetchquery.prepare("SELECT * FROM Customers WHERE prIdCustomer= :custId");
    fetchquery.bindValue(":custId",id);
    fetchquery.exec();

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

    fetchquery = sqlMechanism.myQuery();
    fetchquery.prepare("SELECT * FROM Customers WHERE prIdCustomer LIKE :value OR CustomerName LIKE :value OR CustomerSurname LIKE :value");
    fetchquery.bindValue(":value",value);
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


