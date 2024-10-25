#include "car.h"
#include <iostream>
#include <utility>
#include <QString>
using namespace std;
Car::Car() : id(0), year(0), price(0.0), passengerSeats(0), doors(0) {}
Car::Car(int id, QString model, int year, double price, QString registrationNumber, QString vinNumber, int passengerSeats, int doors)
    : id(id),
    model(move(model)),
    year(year), price(price),
    registrationNumber(move(registrationNumber)),
    vinNumber(move(vinNumber)),
    passengerSeats(passengerSeats),
    doors(doors) {}
void Car::display() const {
    cout << "ID: " << id << endl;
    cout << "Model: " << model.toStdString() << endl;
    cout << "Year: " << year << endl;
    cout << "Price: " << price << endl;
    cout << "Registration Number: " << registrationNumber.toStdString() << endl;
    cout << "VinNumber: " << vinNumber.toStdString() << endl;
    cout << "Passenger Seats: " << passengerSeats << endl;
    cout << "Doors: " << doors << endl;
}
