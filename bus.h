//
// Created by Redmi on 15.10.2024.
//

#ifndef BUS_H
#define BUS_H
#include "base.h"
#include <string>


class Bus : public Base {
    int passengerSeats;
    bool seatsDisabled;
    public:
    Bus();
    Bus(int id, std::string model, int year, double price, std::string registrationNumber, int passengerSeats, bool seatsDisabled);
    Bus(const Bus&) = default;
    ~Bus() = default;
    void display() const;
};



#endif //BUS_H
