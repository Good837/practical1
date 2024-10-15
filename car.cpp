#include "car.h"
#include <iostream>
#include <utility>
using namespace std;
    Car::Car() : id(0), year(0), price(0.0), passengerSeats(0), doors(0) {}
    Car::Car(int id, std::string model, int year, double price, std::string registrationNumber, std::string vinNumber, int passengerSeats, int doors)
: id(id),
model(move(model)),
year(year), price(price),
registrationNumber(move(registrationNumber)),
vinNumber(move(vinNumber)),
passengerSeats(passengerSeats),
doors(doors) {}
    void Car::display() const {
        cout << "ID: " << id << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
        cout << "Price: " << price << "$"  << endl;
        cout << "Registration Number: " << registrationNumber << endl;
        cout << "VinNumber: " << vinNumber << endl;
        cout << "Passenger Seats: " << passengerSeats << endl;
        cout << "Doors: " << doors << endl;
    }
    bool Car::operator==(const Car &other) const {
        return id == other.id &&
            model == other.model &&
                year == other.year &&
                    price == other.price &&
                        registrationNumber == other.registrationNumber &&
                            vinNumber == other.vinNumber &&
                                passengerSeats == other.passengerSeats &&
                                    doors == other.doors;
    }


