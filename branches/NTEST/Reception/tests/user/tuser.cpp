/** @file tuser.cpp
 *  @brief User Unit Test Implementation
 *  @author Efstathios Xatzikiriakidis
 *
 *  This is the unit test for the "User" class.
 */

#include "tuser.h"

QString gName     = QString ("Efstathios");      /**< User name value (test data). */
QString gSurname  = QString ("Xatzikiriakidis"); /**< User surname value (test data). */
QString gUsername = QString ("efst_user");       /**< User username value (test data). */
QString gPassword = QString ("efst_pass");       /**< User password value (test data). */
QString gRole     = QString ("Receptionist");    /**< User role value (test data). */

/** User Constructor Test Method
 *  @brief This method tests the constructor of the "User" class.
 *  @author Efstathios Xatzikiriakidis
 */
void TUser::testConstructor ()
{
  User u (gName, gSurname, gUsername, gPassword, gRole);

  QVERIFY (u.getName ()     == gName     &&
           u.getSurname ()  == gSurname  &&
           u.getUsername () == gUsername &&
           u.getPassword () == gPassword &&
           u.getRole ()     == gRole);
}

/** User Name Test Method
 *  @brief This method tests the Name set/get methods of the "User" class.
 *  @author Efstathios Xatzikiriakidis
 */
void TUser::testName ()
{
  User u;
  u.setName (gName);

  QVERIFY (u.getName () == gName);
}

/** User Surname Test Method
 *  @brief This method tests the Surname set/get methods of the "User" class.
 *  @author Efstathios Xatzikiriakidis
 */
void TUser::testSurname ()
{
  User u;
  u.setSurname (gSurname);

  QVERIFY (u.getSurname () == gSurname);
}

/** User Username Test Method
 *  @brief This method tests the Username set/get methods of the "User" class.
 *  @author Efstathios Xatzikiriakidis
 */
void TUser::testUsername ()
{
  User u;
  u.setUsername (gUsername);

  QVERIFY (u.getUsername () == gUsername);
}

/** User Password Test Method
 *  @brief This method tests the Password set/get methods of the "User" class.
 *  @author Efstathios Xatzikiriakidis
 */
void TUser::testPassword ()
{
  User u;
  u.setPassword (gPassword);

  QVERIFY (u.getPassword () == gPassword);
}

/** User Role Test Method
 *  @brief This method tests the Role set/get methods of the "User" class.
 *  @author Efstathios Xatzikiriakidis
 */
void TUser::testRole ()
{
  User u;
  u.setRole (gRole);

  QVERIFY (u.getRole () == gRole);
}

QTEST_MAIN (TUser)