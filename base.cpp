//
// Created by Redmi on 15.10.2024.
//

#include "base.h"
#include <iostream>
#include <utility>

Base::Base() : id(0), year(0), price(0.0) {}
Base::Base(int id, std::string model, int year, double price, std::string registrationNumber) : id(id),
model(move(model)),
year(year),
price(price),
registrationNumber(move(registrationNumber)) {}

void Base::display() const {
    std::cout << "ID: " << id << std::endl;
    std::cout << "Model: " << model << std::endl;
    std::cout << "Year: " << year << std::endl;
    std::cout << "Price: " << price << std::endl;
    std::cout << "Registration Number: " << registrationNumber << std::endl;
}

void Base::input() {
    std::cout << "Enter ID: ";
    std::cin >> id;
    std::cout << "Enter Model: ";
    std::cin >> model;
    std::cout << "Enter Year: ";
    std::cin >> year;
    std::cout << "Enter Price: ";
    std::cin >> price;
    std::cout << "Enter Registration Number: ";
    std::cin >> registrationNumber;
}

