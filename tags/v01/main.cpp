#include <QApplication>
#include <cstdlib>

#include "mainwindow.h"
#include "sqlMechanism.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MainWindow w;

    SQLMechanism m;

    w.show();

    return a.exec();
}
