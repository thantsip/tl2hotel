

#ifndef CUSTOMER_H
#define CUSTOMER_H
#include <QString>

using namespace std;

class Customer
{
    QString id;
    QString name;
    QString surname;
    int groupId;

public:
	
    Customer();	
    Customer(QString i,QString n,QString sn,int ig);
    ~Customer();


	void setId(QString i);
    void setName(QString n);
    void setSurname(QString sn);
    void setGroupId(int ig);


    QString getId();
    QString getName();
    QString getSurname();
    int getGroupId();


};

#endif //  /CUSTOMER_H
