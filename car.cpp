#include "car.h"
#include <iostream>
#include <utility>
using namespace std;
    Car::Car() : Base(), doors(0) {}
    Car::Car(int id, std::string model, int year, double price, std::string registrationNumber, std::string vinNumber, int passengerSeats, int doors)
: doors(doors) {}
    void Car::display() const {
        Base::display();
        cout << "Doors: " << doors << endl;
    }


