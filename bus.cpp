
#include "bus.h"
#include <iostream>
#include <utility>
using namespace std;

Bus::Bus() : Base(), passengerSeats(0), seatsDisabled(false) {}

Bus::Bus(int id, string model, int year, double price, string registrationNumber, int passengerSeats, bool seatsDisabled)
    : Base(id, move(model), year, price, move(registrationNumber)), passengerSeats(passengerSeats), seatsDisabled(seatsDisabled) {}

void Bus::display() const {
    Base::display();
    cout << "Passenger Seats: " << passengerSeats << endl;
    cout << "Seats Disabled: " << (seatsDisabled ? "Yes" : "No") << endl;
}

