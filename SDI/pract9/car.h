#ifndef CAR_H
#define CAR_H
#include <QString>
using namespace std;

class Car {
    int id;
    QString model;
    int year;
    double price;
    QString registrationNumber;
    QString vinNumber;
    int passengerSeats;
    int doors;
public:
    Car();
    Car(int id, QString model, int year, double price, QString registrationNumber, QString vinNumber, int passengerSeats, int doors);
    Car(const Car&) = default;
    ~Car() = default;
    void display() const;
    QString toString() const {
        return QString("ID: %1\nModel: %2\nYear: %3\nPrice: %4\nRegistration Number: %5\nVin Number: %6\nPassenger Seats: %7\nDoors: %8")
        .arg(id)
            .arg(model)
            .arg(year)
            .arg(price)
            .arg(registrationNumber)
            .arg(vinNumber)
            .arg(passengerSeats)
            .arg(doors);
    }
};

#endif //CAR_H
