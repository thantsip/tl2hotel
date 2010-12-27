#include "tuser.h"

QString tName ("Nick");
QString tSurname ("Anderson");
QString tUsername ("nick_user");
QString tPassword ("nick_pass");
QString tRole ("receptionist");

void TUser::testConstructor () {
  User u (tName, tSurname, tUsername, tPassword, tRole);

  QVERIFY (u.getName ()     == tName     &&
           u.getSurname ()  == tSurname  &&
           u.getUsername () == tUsername &&
           u.getPassword () == tPassword &&
		   u.getRole ()     == tRole);
}

void TUser::testName () {
  User u;

  u.setName (tName);

  QVERIFY (u.getName () == tName);
}

void TUser::testSurname () {
  User u;

  u.setSurname (tSurname);

  QVERIFY (u.getSurname () == tSurname);
}

void TUser::testUsername () {
  User u;

  u.setUsername (tUsername);

  QVERIFY (u.getUsername () == tUsername);
}

void TUser::testPassword () {
  User u;

  u.setPassword (tPassword);

  QVERIFY (u.getPassword () == tPassword);
}

void TUser::testRole () {
  User u;

  u.setRole (tRole);

  QVERIFY (u.getRole () == tRole);
}

QTEST_MAIN (TUser)