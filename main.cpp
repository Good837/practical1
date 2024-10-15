#include "car.h"
#include <iostream>
using namespace std;

int main() {
    Car car1;
    Car car2(1, "Toyota", 2020, 24000.0, "AB123CD", "1HGM82633A123456", 5, 4);
    Car car3(2, "Honda", 2021, 26000.0, "EF456GH", "1HGCM2633A654321", 5, 4);

    cout << "Car 1:\n";
    car1.display();
    cout << "Car 2:\n";
    car2.display();
    cout << "Car 3:\n";
    car3.display();

    if (car1 == car2) {
        cout << "Cars are equal\n";
    } else {
        cout << "Cars differ\n";
    }

    if (car1 == car3) {
        cout << "Cars are equal\n";
    } else {
        cout << "Cars differ\n";
    }


    return 0;
}
