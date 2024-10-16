//
// Created by Redmi on 15.10.2024.
//

#ifndef BASE_H
#define BASE_H
#include <string>

class Base {
protected:
    int id;
    std::string model;
    int year;
    double price;
    std::string registrationNumber;
    public:
    Base();
    Base(int id, std::string model, int year, double price, std::string registrationNumber);
    virtual void display() const = 0;
};
// Base

#endif //BASE_H
