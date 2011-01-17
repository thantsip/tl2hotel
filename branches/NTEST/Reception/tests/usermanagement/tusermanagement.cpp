/** @file   tusermanagement.h
 *  @brief  usermanagement Unit Test Header
 *  @author Georgomitros Konstantinos
 *
 *  This is the unit test for the "usermanagement" class.
 */


#include "tusermanagement.h"



User user0("hideo","kojima","fox","12345","admin");



void  TuserManagement::Testconstructors()
{


   //entiness emptyness ...nothing to check


     QVERIFY (0==0);

}

void TuserManagement::TestnewUser()
{

  UserManagement sudo;
  User fetch,user("hideo","kojima","fox","12345","admin");

     sudo.newUser(user);
     fetch=sudo.fetchUser("fox");

     sudo.newUser(user);   // pass the test


     QVERIFY (fetch.getName()     == "hideo"   &&
              fetch.getSurname()  == "kojima"  &&
              fetch.getUsername() == "fox"     &&
              fetch.getRole()     == "admin"   );
}

void TuserManagement::TestdeleteUser()
{
    int ret=0;

    UserManagement sudo;
    User user01;

    sudo.deleteUser(user0);

     user01=sudo.fetchUser("fox");

     if(user01.getUsername()=="fox")
        ret=1;


     QVERIFY (0==ret);
}

void TuserManagement::TesteditUser()
{
   int ret=0;
     UserManagement sudo;

     User a("sigeru","migiamoto","link","1111","user"),retrived;
     User ivalid("s","s","S","1","user"),invalid_ret;

     sudo.newUser(a);



      User b=sudo.fetchUser("link");

      b.setName("aa");
      b.setPassword("123");
      b.setRole("user");
      b.setSurname("aa");

      sudo.editUser(b);




     //retrieve again and check

     retrived=sudo.fetchUser("link");

    //checking invalid user


    invalid_ret= sudo.fetchUser("s");

    if(invalid_ret.getName()=="")
        ret=1;

     QVERIFY (retrived.getName()     == "aa"  &&
              retrived.getSurname()  == "aa"  &&
              retrived.getUsername() == "link" &&
              retrived.getRole()     == "user" &&
              retrived.getPassword() == "123"  && ret==1);

 }

void TuserManagement::TestfetchUser()
{

    UserManagement sudo;
    User a=sudo.fetchUser("link");





    QVERIFY (a.getName()     == "aa"  &&
             a.getSurname()  == "aa"  &&
             a.getUsername() == "link" &&
             a.getRole()     == "user" &&
             a.getPassword() == "123" );
}
    


void TuserManagement::TestfetchAllUsers()
{
    int ret=0;
      UserManagement sudo;

      User a("a","a","a","ALPHA","user");
      User b("b","b","b","BETA","user");
      User c("c","c","c","GAMA","user");

      sudo.newUser(a);
      sudo.newUser(b);
      sudo.newUser(c);



       vector<User>all;

       all=sudo.fetchAllUsers();

       if(all.empty())
           ret=1;







 QVERIFY (0==ret);
}


void TuserManagement::TestcheckInData()
{
  int ret=0;
    UserManagement sudo;
    User a("@#$$","@$##","323#","##$!","#SD#er");
    User b;

 if(sudo.checkInData(a))
   sudo.newUser(a);


  b=sudo.fetchUser("323#");

  if(b.getUsername()=="323#" || b.getUsername()==0 || b.getUsername()=="")
    ret=1;


  QVERIFY (0==ret);
}

QTEST_MAIN (TuserManagement)





