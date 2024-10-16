#ifndef CAR_H
#define CAR_H
#include "base.h"
#include <string>
using namespace std;

class Car : public Base {
    int doors;
public:
    Car();
    Car(int id, std::string model, int year, double price, std::string registrationNumber, std::string vinNumber, int passengerSeats, int doors);
    void display() const override;
};

#endif //CAR_H
