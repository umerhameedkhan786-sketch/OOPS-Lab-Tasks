#include <iostream>
using namespace std;

// Base class
class Vehicle {
public:
    Vehicle(string type) {
        cout << "Vehicle Constructor Called: " << type << endl;
    }
};

// Derived class (Level 1)
class Car : public Vehicle {
public:
    Car(string type, string brand) : Vehicle(type) {
        cout << "Car Constructor Called: " << brand << endl;
    }
};

// Derived class (Level 2)
class ElectricCar : public Car {
public:
    ElectricCar(string type, string brand, string battery)
        : Car(type, brand) {
        cout << "ElectricCar Constructor Called: Battery " << battery << endl;
    }
};

// Main function
int main() {
    ElectricCar ec("Four-Wheeler", "Tesla", "75 kWh");

    return 0;
}
