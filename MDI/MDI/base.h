#ifndef BASE_H
#define BASE_H
#include <QString>

class Base {
protected:
    int id;
    QString model;
    int year;
    double price;
    QString registrationNumber;
public:
    Base();
    Base(int id, QString model, int year, double price, QString registrationNumber);
    virtual void display() const = 0;
    virtual void input();
    void setId(int newId) {
        id = newId;
    }

    int getId() const {
        return id;
    }
    QString getModel() const {
        return model;
    }

};
// Base

#endif //BASE_H
