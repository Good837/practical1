#ifndef BUS_H
#define BUS_H
#include "base.h"
#include <QString>


class Bus : public Base {
    int passengerSeats;
    bool seatsDisabled;
public:
    Bus();
    Bus(int id, QString model, int year, double price, QString registrationNumber, int passengerSeats, bool seatsDisabled);
    Bus(const Bus&) = default;
    ~Bus() = default;
    void display() const override;
    void input() override;
    QString toString() const;
    int getSeats() const {
        return passengerSeats;
    }
    bool getDisabled() const {
        return seatsDisabled;
    }
};



#endif //BUS_H
