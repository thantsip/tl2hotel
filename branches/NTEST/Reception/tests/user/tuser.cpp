#include "tuser.h"

QString gName ("Efstathios");
QString gSurname ("Xatzikiriakidis");
QString gUsername ("efstuser");
QString gPassword ("efstpass");
QString gRole ("Receptionist");

void TUser::testConstructor () {
  User u (gName, gSurname, gUsername, gPassword, gRole);

  QVERIFY (u.getName ()     == gName     &&
           u.getSurname ()  == gSurname  &&
           u.getUsername () == gUsername &&
           u.getPassword () == gPassword &&
		   u.getRole ()     == gRole);
}

void TUser::testName () {
  User u;

  u.setName (gName);

  QVERIFY (u.getName () == gName);
}

void TUser::testSurname () {
  User u;

  u.setSurname (gSurname);

  QVERIFY (u.getSurname () == gSurname);
}

void TUser::testUsername () {
  User u;

  u.setUsername (gUsername);

  QVERIFY (u.getUsername () == gUsername);
}

void TUser::testPassword () {
  User u;

  u.setPassword (gPassword);

  QVERIFY (u.getPassword () == gPassword);
}

void TUser::testRole () {
  User u;

  u.setRole (gRole);

  QVERIFY (u.getRole () == gRole);
}

QTEST_MAIN (TUser)