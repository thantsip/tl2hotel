/** @file tcustomer.cpp
 *  @brief Customer Unit Test Implementation
 *  @author Efstathios Xatzikiriakidis
 *
 *  This is the unit test for the "Customer" class.
 */

#include "tcustomer.h"

QString gId      = QString ("AX1111");    /**< Customer ID value (test data). */
QString gSurname = QString ("Malkovich"); /**< Customer surname value (test data). */
QString gName    = QString ("Peter");     /**< Customer name value (test data). */
int     gGroup   = 1;                     /**< Customer group ID value (test data). */

/** Customer Constructor Test Method
 *  @brief This method tests the constructor of the "Customer" class.
 *  @author Efstathios Xatzikiriakidis
 */
void TCustomer::testConstructor ()
{
  Customer c (gId, gName, gSurname, gGroup);

  QVERIFY (c.getId ()      == gId      &&
           c.getName ()    == gName    &&
           c.getSurname () == gSurname &&
           c.getGroupId () == gGroup);
}

/** Customer ID Test Method
 *  @brief This method tests the ID set/get methods of the "Customer" class.
 *  @author Efstathios Xatzikiriakidis
 */
void TCustomer::testId ()
{
  Customer c;
  c.setId (gId);

  QVERIFY (c.getId () == gId);
}

/** Customer Name Test Method
 *  @brief This method tests the Name set/get methods of the "Customer" class.
 *  @author Efstathios Xatzikiriakidis
 */
void TCustomer::testName ()
{
  Customer c;
  c.setName (gName);

  QVERIFY (c.getName () == gName);
}

/** Customer Surname Test Method
 *  @brief This method tests the Surname set/get methods of the "Customer" class.
 *  @author Efstathios Xatzikiriakidis
 */
void TCustomer::testSurname ()
{
  Customer c;
  c.setSurname (gSurname);

  QVERIFY (c.getSurname () == gSurname);
}

/** Customer Group Id Test Method
 *  @brief This method tests the Group ID set/get methods of the "Customer" class.
 *  @author Efstathios Xatzikiriakidis
 */
void TCustomer::testGroupId ()
{
  Customer c;
  c.setGroupId (gGroup);

  QVERIFY (c.getGroupId () == gGroup);
}

QTEST_MAIN (TCustomer)