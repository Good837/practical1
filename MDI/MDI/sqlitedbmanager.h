#ifndef SQLITEDBMANAGER_H
#define SQLITEDBMANAGER_H

#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>
#include <QDebug>
#include "car.h"
#include "bus.h"

class SqliteDBManager
{
public:
    SqliteDBManager();
    ~SqliteDBManager();
    void connectToDataBase();
    void closeDataBase();
    QSqlDatabase getDB();
    bool createTables();
    bool insertIntoTable(const Car& car);
    bool insertIntoTable(const Bus& bus);
    void executeQuery(const QString &queryStr);
     void logError(const QString &message);
private:
    QSqlDatabase db;
};

#endif // SQLITEDBMANAGER_H
