#include "sqlitedbmanager.h"
#include <QFile>
#include <QTextStream>
#include <QDebug>

SqliteDBManager::SqliteDBManager() {
    // Спроба відкрити базу даних
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("database.db");
    connectToDataBase();
    if (!db.open()) {
        qCritical() << "Cannot open database:" << db.lastError().text();
        logError("Database error: " + db.lastError().text());
        return; // або викинути виняток
    }
}


SqliteDBManager::~SqliteDBManager() {
    closeDataBase();
}

void SqliteDBManager::connectToDataBase() {
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("transport_db.sqlite");
    if (!db.open()) {
        QString errorMsg = "Cannot open database: " + db.lastError().text();
        qCritical() << errorMsg;  // Виводимо повідомлення в консоль
        logError(errorMsg); // Логуємо помилку
        return; // Або викинути виняток
    } else {
        qDebug() << "Database connected successfully!";
    }
}


void SqliteDBManager::closeDataBase() {
    if (db.isOpen()){
        db.close();
    }
}

QSqlDatabase SqliteDBManager::getDB() {
    return db;
}

bool SqliteDBManager::createTables(){
    QSqlQuery query;
    QString createCarTable = "CREATE TABLE IF NOT EXISTS car ("
                             "id INTEGER PRIMARY KEY AUTOINCREMENT, "
                             "model TEXT, year TEXT, price TEXT, registrationNumber TEXT, "
                             "vinNumber TEXT, passengerSeats TEXT, doors TEXT)";
    if (!query.exec(createCarTable)) {
        qDebug() << "Failed to create car table:" << query.lastError();
        return false;
    }
    QString createBusTable = "CREATE TABLE IF NOT EXISTS bus ("
                             "id INTEGER PRIMARY KEY AUTOINCREMENT, "
                             "model TEXT, year TEXT, price TEXT, registrationNumber TEXT, "
                             "passengerSeats TEXT, seatsDisabled TEXT)";
    if (!query.exec(createBusTable)){
        qDebug() << "Failed to create bus table:" << query.lastError();
        return false;
    }
    return true;
}

bool SqliteDBManager::insertIntoTable(const Car& car){
    QSqlQuery query;
    query.prepare("INSERT INTO car (model, year, price, registrationNumber, vinNumber, passengerSeats, doors) "
                  "VALUES (:model, :year, :price, :registrationNumber, :vinNumber, :passengerSeats, :doors)");
    query.bindValue(":model", car.getModel());
    query.bindValue(":year", car.getYear());
    query.bindValue(":price", car.getPrice());
    query.bindValue(":registrationNumber", car.getRegNumber());
    query.bindValue(":vinNumber", car.getVin());
    query.bindValue(":passengerSeats", car.getSeats());
    query.bindValue(":doors", car.getDoors());
    if (!query.exec()) {
        logError("Failed to insert into table: " + query.lastError().text());
        qWarning() << "Failed to insert into table:" << query.lastError();
        return false;
    }
    return true;
}
bool SqliteDBManager::insertIntoTable(const Bus& bus){
    QSqlQuery query;
    query.prepare("INSERT INTO car (model, year, price, registrationNumber, passengerSeats, seatsDisabled) "
                  "VALUES (:model, :year, :price, :registrationNumber, :passengerSeats, :seatsDisabled)");
    query.bindValue(":model", bus.getModel());
    query.bindValue(":year", bus.getYear());
    query.bindValue(":price", bus.getPrice());
    query.bindValue(":registrationNumber", bus.getRegNumber());
    query.bindValue(":passengerSeatsr", bus.getSeats());
    query.bindValue(":seatsDisabled", bus.getDisabled());
    if (!query.exec()) {
        logError("Failed to insert into table: " + query.lastError().text());
        qWarning() << "Failed to insert into table:" << query.lastError();
        return false;
    }
    return true;
}
