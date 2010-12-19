#include "tfilehandler.h"

QString tFilename ("fh-test.txt");

void
TFileHandler::createFile () {
  QFile file (tFilename);

  if (!file.open (QIODevice::WriteOnly))
    QFAIL ("Fail: file cannot created.");

  file.close ();
}

void
TFileHandler::isFileExist () {
  FileHandler fh;
  QVERIFY (fh.isFileExist (tFilename) == true);
}

void
TFileHandler::removeFile () {
  FileHandler fh;
  QVERIFY (fh.removeFile(tFilename) == true);
}

QTEST_MAIN (TFileHandler)