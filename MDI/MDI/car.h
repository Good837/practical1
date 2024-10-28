#ifndef CAR_H
#define CAR_H
#include "base.h"
#include <QString>
using namespace std;

class Car : public Base {
    int doors;
    QString vinNumber;
public:
    Car();
    Car(int id, QString model, int year, double price, QString registrationNumber, QString vinNumber, int passengerSeats, int doors);
    void display() const override;
    void input() override;
    QString toString() const;
};

#endif //CAR_H
