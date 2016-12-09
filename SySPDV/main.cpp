#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QSqlDatabase db = QSqlDatabase::addDatabase("BancoSYS");
      db.setHostName("localhost");
      db.setDatabaseName("syspdv");
      db.setUserName("root");
      db.setPassword("fbd2k162");
      bool ok = db.open();

    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
