#include "tfilehandler.h"

QString gFilename ("fh-test.txt");

void
TFileHandler::createFile () {
  QFile file (gFilename);

  if (!file.open (QIODevice::WriteOnly)) {
    QFAIL ("Fail: file cannot created.");
  }
  else {
    file.close ();
  }
}

void
TFileHandler::isFileExist () {
  FileHandler fh;
  QVERIFY (fh.isFileExist (gFilename) == true);
}

void
TFileHandler::removeFile () {
  FileHandler fh;
  QVERIFY (fh.removeFile(gFilename) == true);
}

QTEST_MAIN (TFileHandler)