#include "car.h"
#include "bus.h"
#include "Vector.h"
#include <iostream>
#include <list>
#include <random>
#include <algorithm>
#include <map>
using namespace std;

enum BaseType {
    CarType = 1,
    BusType = 2,
    DisplayById = 3,
    DisplayAll = 4,
    DisplayLists = 5,
    EXIT = 6
};

    BaseType displayMenu() {
        int choice;
        cout << "Select the type of vehicle to create:\n";
        cout << "1. Car\n";
        cout << "2. Bus\n";
        cout << "3. Display by Id\n";
        cout << "4. Display all\n";
        cout << "5. Display lists\n";
        cout << "6. Exit\n";

        while (true) {
            if (cin >> choice && choice >= 1 && choice <= 6) {
                return static_cast<BaseType>(choice);
            } else {
                cout << "Invalid choice. Please select a valid option:\n";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
        }
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

void displayVehicleById(const map<int, Base*>& vehicles) {
    int id;
    cout << "Enter vehicle id: ";
    cin >> id;
    auto it = vehicles.find(id);
    if (it != vehicles.end()) {
        cout << "Vehicle with id " << id << ":\n";
        it->second->display();
    }else {
        cout << "Vehicle with id " << id << " not found\n";
    }
}

//     void deleteVehicle(vector<Base*>& vehicles, const string& type) {
//     vehicles.erase(remove_if(vehicles.begin(), vehicles.end(),[&](Base* vehicle) {
//         bool isMatch = (type == "Car" && dynamic_cast<Car*>(vehicle)) || (type == "Bus" && dynamic_cast<Bus*>(vehicle));
//         if (!isMatch) {
//             delete vehicle;
//         }
//         return isMatch;
//     }), vehicles.end() );
// }

void displayAll(const map<int, Base*>& vehicles, int idCounter) {
    if (vehicles.empty()) {
        cout << "There are no vehicles to display\n";
        return;
    } else {
        cout << "There are " << vehicles.size() << " vehicles to display\n";
        for (const auto& [id, vehicle] : vehicles) {
            cout << "Vehicle with id " << id << ":\n";
            vehicle->display();
            cout << endl;
        }
    }
}

// void displayVehicle(const vector<Base*>& vehicles) {
//     for (auto* vehicle : vehicles) {
//         vehicle->display();
//         cout << endl;
//     }
// }

void allLists() {
    list<int> oddNumbers;
    list<int> evenNumbers;
    int oddNumber = 1;
    for (int i = 0; i < 10; ++i) {
        oddNumbers.push_back(oddNumber);
        oddNumber+= 2 + (i % 3);
    }
    mt19937 generator(static_cast<unsigned int>(time(NULL)));
    uniform_int_distribution<int> distribution(0, 99);
    for (int i = 0; i < 10; ++i) {
        int randomNumber = distribution(generator);
        if (randomNumber % 2 == 0) {
            randomNumber++;
        }
        evenNumbers.push_back(randomNumber);
    }
    oddNumbers.sort();
    evenNumbers.sort();
    list<int> mergedNumbers;
    merge(oddNumbers.begin(), oddNumbers.end(), evenNumbers.begin(), evenNumbers.end(), back_inserter(mergedNumbers));
    cout << "Odd numbers: ";
    for (const auto& number : oddNumbers) {
        cout << number << " ";
    }
    cout << endl;
    cout << "Even numbers: ";
    for (const auto& number : evenNumbers) {
        cout << number << " ";
    }
    cout << endl;
    cout << "Merged numbers: ";
    for (const auto& number : mergedNumbers) {
        cout << number << " ";
    }
    cout << endl;
}

int main() {
    map<int, Base*> vehicles;
    int idCounter = 1;
    BaseType choice;
    do {
        choice = displayMenu();

        switch (choice) {
            case CarType: {
                Base* vehicle = createVehicle(CarType);
                if (vehicle) {
                    vehicle->setId(idCounter);
                    vehicles[idCounter] = vehicle;
                    cout << "Vehicle with ID " << idCounter << " created.\n";
                    idCounter++;
                }
                break;
            }
            case BusType: {
                Base* vehicle = createVehicle(BusType);
                if (vehicle) {
                    vehicle->setId(idCounter);
                    vehicles[idCounter] = vehicle;
                    cout << "Vehicle with ID " << idCounter << " created.\n";
                    idCounter++;
                }
                break;
            }
            case DisplayById: {
                displayVehicleById(vehicles);
                break;
            }
            case DisplayAll: {
                displayAll(vehicles, idCounter);
                break;
            }
            case DisplayLists: {
                allLists();
                break;
            }
            default:
                cout << "Invalid choice\n";
            break;
        }
    } while (choice != EXIT);
    for (const auto& pair : vehicles) {
        delete pair.second;
    }
    return 0;
}
