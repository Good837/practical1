#include "base.h"
#include <iostream>
#include <utility>

Base::Base() : id(0), year(0), price(0.0) {}
Base::Base(int id, QString model, int year, double price, QString registrationNumber) : id(id),
    model(model),
    year(year),
    price(price),
    registrationNumber(registrationNumber) {}

void Base::display() const {
    std::cout << "ID: " << id << std::endl;
    std::cout << "Model: " << model.toStdString() << std::endl;
    std::cout << "Year: " << year << std::endl;
    std::cout << "Price: " << price << std::endl;
    std::cout << "Registration Number: " << registrationNumber.toStdString() << std::endl;
}

void Base::input() {
    std::cout << "Enter ID: ";
    std::cin >> id;
    std::cout << "Enter Model: ";
    std::string modelStr;
    std::cin >> modelStr;
    model = QString::fromStdString(modelStr);
    std::cout << "Enter Year: ";
    std::cin >> year;
    std::cout << "Enter Price: ";
    std::cin >> price;
    std::cout << "Enter Registration Number: ";
    std::string regNumStr;
    std::cin >> regNumStr;  // Use regNumStr instead of modelStr
    registrationNumber = QString::fromStdString(regNumStr); // Correct assignment
}
