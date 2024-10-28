#ifndef CAR_H
#define CAR_H
#include "base.h"
#include <QString>
using namespace std;

class Car : public Base {
    int doors;
    QString vinNumber;
    int passengerSeats;
public:
    Car();
    Car(int id, QString model, int year, double price, QString registrationNumber, QString vinNumber, int passengerSeats, int doors);
    void display() const override;
    void input() override;
    QString toString() const;
    int getDoors() const {
        return doors;
    }
    QString getVin() const {
        return vinNumber;
    }
    int getSeats() const {
        return passengerSeats;
    }
};

#endif //CAR_H
