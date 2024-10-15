#ifndef CAR_H
#define CAR_H
#include <string>
using namespace std;

class Car {
    int id;
    std::string model;
    int year;
    double price;
    std::string registrationNumber;
    std::string vinNumber;
    int passengerSeats;
    int doors;
public:
    Car();
    Car(int id, std::string model, int year, double price, std::string registrationNumber, std::string vinNumber, int passengerSeats, int doors);
    Car(const Car&) = default;
    ~Car() = default;
    void display() const;
    bool operator==(const Car &other) const;
};

#endif //CAR_H
