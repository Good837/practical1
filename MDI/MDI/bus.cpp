#include "bus.h"
#include <iostream>
#include <utility>
using namespace std;

Bus::Bus() : Base(), passengerSeats(0), seatsDisabled(false) {}

Bus::Bus(int id, QString model, int year, double price, QString registrationNumber, int passengerSeats, bool seatsDisabled)
    : Base(id, model, year, price, registrationNumber), // Pass registrationNumber here
    passengerSeats(passengerSeats),
    seatsDisabled(seatsDisabled) {}

void Bus::display() const {
    Base::display();
    cout << "Passenger Seats: " << passengerSeats << endl;
    cout << "Seats Disabled: " << (seatsDisabled ? "Yes" : "No") << endl;
}

void Bus::input() {
    Base::input();
    cout << "Passenger Seats: ";
    cin >> passengerSeats;
    cout << "Seats Disabled: ";
    cin >> seatsDisabled;
}
QString Bus::toString() const {
    return QString("ID: %1, Model: %2, Year: %3, Price: %4, Registration Number: %5, Passenger Seats: %6, Seats for Disabled: %7")
    .arg(id)
        .arg(model)
        .arg(year)
        .arg(price)
        .arg(registrationNumber)
        .arg(passengerSeats)
        .arg(seatsDisabled ? "Yes" : "No");
}

