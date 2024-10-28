#include "car.h"
#include <iostream>
#include <utility>
using namespace std;

Car::Car() : Base(), doors(0) {}

Car::Car(int id, QString model, int year, double price, QString registrationNumber, QString vinNumber, int passengerSeats, int doors)
    : Base(id, model, year, price, registrationNumber), doors(doors) {}

void Car::display() const {
    Base::display();
    cout << "Doors: " << doors << endl;
}

void Car::input() {
    Base::input();
    cout << "Doors: ";
    cin >> doors;
}
QString Car::toString() const {
    return QString("ID: %1, Model: %2, Year: %3, Price: %4, Registration Number: %5, VIN: %6, passenger Seats %7, Doors: %8")
    .arg(id)
        .arg(model)
        .arg(year)
        .arg(price)
        .arg(registrationNumber)
        .arg(vinNumber)
        .arg(passengerSeats)
        .arg(doors);
}

