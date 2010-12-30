/** @file tfilehandler.cpp
 *  @brief FileHandler Unit Test Implementation
 *  @author Efstathios Xatzikiriakidis
 *
 *  This is the unit test for the "FileHandler" class.
 */

#include "tfilehandler.h"

/**
 * Filename of the test file.
 */
QString gFilename = QString ("fh-test.txt");

/** File Create Method
 *  @brief This method tries to create a file for testing the "FileHandler" class.
 *  @author Efstathios Xatzikiriakidis
 */
void
TFileHandler::createFile ()
{
  QFile file (gFilename);

  if (!file.open (QIODevice::WriteOnly))
  {
    QFAIL ("Fail: file cannot created.");
  }
  else
  {
    file.close ();
  }
}

/** File Exists Test Method
 *  @brief This method tests if the "FileHandler" class can check that a file exists.
 *  @author Efstathios Xatzikiriakidis
 */
void
TFileHandler::isFileExist ()
{
  FileHandler fh;

  QVERIFY (fh.isFileExist (gFilename) == true);
}

/** Remove File Test Method
 *  @brief This method tests if the "FileHandler" class can remove a file.
 *  @author Efstathios Xatzikiriakidis
 */
void
TFileHandler::removeFile ()
{
  FileHandler fh;

  QVERIFY (fh.removeFile(gFilename) == true);
}

QTEST_MAIN (TFileHandler)