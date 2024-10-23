#include "car.h"
#include "bus.h"
#include "Vector.h"
#include <iostream>
#include <vector>
#include <random>
#include <ctime>
#include <algorithm>
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
        case CarType: {
            Car* car = new Car();
            car->input();
            return car;
        }
        case BusType: {
            Bus* bus = new Bus();
            bus->input();
            return bus;
        }
        case EXIT:
            default:
                return nullptr;
    }
}

    void deleteVehicle(vector<Base*>& vehicles, const string& type) {
    vehicles.erase(remove_if(vehicles.begin(), vehicles.end(),[&](Base* vehicle) {
        bool isMatch = (type == "Car" && dynamic_cast<Car*>(vehicle)) || (type == "Bus" && dynamic_cast<Bus*>(vehicle));
        if (!isMatch) {
            delete vehicle;
        }
        return isMatch;
    }), vehicles.end() );
}

void displayVehicle(const vector<Base*>& vehicles) {
    for (auto* vehicle : vehicles) {
        vehicle->display();
        cout << endl;
    }
}

int main() {
    vector<int> oddNumbers(10);
    int oddNumber = 1;
    for (size_t i = 0; i < oddNumbers.size(); ++i) {
        oddNumbers[i] = oddNumber;
        oddNumber += 2;
    }
    vector<int> evenNumbers(10);
    mt19937 generator(static_cast<unsigned int>(time(0)));
    uniform_int_distribution<int> distribution(1, 100);
    for (auto it = evenNumbers.begin(); it != evenNumbers.end(); ++it) {
        int randomNumber = distribution(generator);
        if (randomNumber % 2 != 0) {
            randomNumber++;
        }
        *it = randomNumber;
    }
    sort(oddNumbers.begin(), oddNumbers.end());
    sort(evenNumbers.begin(), evenNumbers.end());

    vector <int> mergedNumbers(20);
    merge(oddNumbers.begin(), oddNumbers.end(), evenNumbers.begin(), evenNumbers.end(), mergedNumbers.begin());
    cout << "Odd Numbers: ";
    for (size_t i = 0; i < oddNumbers.size(); ++i) {
        cout << oddNumbers[i] << " ";
    }
    cout << endl;
    cout << "Even Numbers: ";
    for (size_t i = 0; i < evenNumbers.size(); ++i) {
        cout << evenNumbers[i] << " ";
    }
    cout << endl;
    cout << "Merged Numbers: ";
    for (size_t i = 0; i < mergedNumbers.size(); ++i) {
        cout << mergedNumbers[i] << " ";
    }
    cout << endl;


    vector<Base*> vehicles;;
    int createdVehicles = 0;

    while (createdVehicles < 5) {
        BaseType choice = displayMenu();

        if (choice == EXIT) {
            cout << "Exiting..." << endl;
            break;
        }

        Base* vehicle = createVehicle(choice);
        if (vehicle != nullptr) {
            vehicles.push_back(vehicle);
            cout << "Vehicle " << createdVehicles + 1 << " created." << endl;
            createdVehicles++;
        } else {
            cout << "Error! Try again." << endl;
        }
    }

    vector<Base*> vehiclesCopy = vehicles;
    cout << "Vector : " << endl;
    displayVehicle(vehicles);
    cout << "Copy vector: " << endl;
    displayVehicle(vehiclesCopy);

    for (int i = 0; i < createdVehicles; ++i) {
        delete vehicles[i];
    }

    for (auto* vehicle : vehicles) {
        delete vehicle;
    }

    return 0;
}
