#include "mainwindow.h"

#include <QApplication>
#include "sqlitedbmanager.h"
#include "cardialog.h"
#include "busdialog.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include <QFile>
#include <QTextStream>

// Метод для виконання SQL запиту
void SqliteDBManager::executeQuery(const QString &queryStr) {
    QSqlQuery query;
    if (!query.exec(queryStr)) {
        qWarning() << "Query execution failed:" << query.lastError().text();
        logError("SQL error: " + query.lastError().text());
    }
}

// Метод для логування помилок
void SqliteDBManager::logError(const QString &message) {
    QFile logFile("log.txt");
    if (logFile.open(QIODevice::WriteOnly | QIODevice::Append)) {
        QTextStream stream(&logFile);
        stream << message << "\n"; // Записуємо повідомлення у файл
        logFile.close();
    }
}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
