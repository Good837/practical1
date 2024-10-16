#include "car.h"
#include "bus.h"
#include <iostream>
#include <vector>
using namespace std;

int main() {
    Car car1(1, "Toyota", 2020, 24000.0, "AB123CD", "1HGM82633A123456", 5, 4);
    Car car2(2, "Honda", 2021, 26000.0, "EF456GH", "1HGCM2633A654321", 5, 4);

    Bus bus1(1, "Mercedes Sprinter", 2022, 45000.0, "AB123CD", 20, true);
    Bus bus2(2, "Ford Transit", 2021, 40000.0, "EF456GH", 16, false);

    vector<Base*> bases = {&bus1, &bus2, &car1, &car2};

    for (const auto* base : bases) {
        base->display();
        cout << endl;
    }

    return 0;
}
