#include "tfilehandler.h"

QString filename ("fh-test.txt");

void
TFileHandler::isFileExist () {
  FileHandler fh;
  QVERIFY (fh.isFileExist (filename) == true);
}

void
TFileHandler::removeFile () {
  FileHandler fh;
  QVERIFY (fh.removeFile(filename) == true);
}

void
TFileHandler::createFile () {
  QFile file (filename);

  if (!file.open (QIODevice::WriteOnly))
    QFAIL ("Fail: file cannot created.");

  file.close();
}

QTEST_MAIN (TFileHandler)