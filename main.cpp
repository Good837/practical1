#include "car.h"
#include "bus.h"
#include <iostream>
using namespace std;

enum BaseType {
    CarType = 1,
    BusType = 2,
    EXIT = 3
};

BaseType displayMenu() {
    int choice;
    cout << "Select the type of vehicle to create:\n";
    cout << "1. Car\n";
    cout << "2. Bus\n";
    cout << "3. Exit\n";
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 1)
        return CarType;
    else if (choice == 2)
        return BusType;
    else
        return EXIT;
}

Base* createVehicle(BaseType choice) {
    switch (choice) {
        case CarType:
            return new Car();
        case BusType:
            return new Bus();
        case EXIT:
            default:
                return nullptr;
    }
}

int main() {
    Base* vehicles[5];
    int createdVehicles = 0;

    while (createdVehicles < 5) {
        BaseType choice = displayMenu();

        if (choice == EXIT) {
            cout << "Exiting..." << endl;
            break;
        }

        Base* vehicle = createVehicle(choice);
        if (vehicle != nullptr) {
            vehicles[createdVehicles] = vehicle;
            cout << "Vehicle " << createdVehicles + 1 << " created." << endl;
            createdVehicles++;
        } else {
            cout << "Error! Try again." << endl;
        }
    }

    cout << "\nVehicle details:" << endl;
    for (int i = 0; i < createdVehicles; ++i) {
        vehicles[i]->display();
        cout << endl;
    }

    for (int i = 0; i < createdVehicles; ++i) {
        delete vehicles[i];
    }

    return 0;
}
