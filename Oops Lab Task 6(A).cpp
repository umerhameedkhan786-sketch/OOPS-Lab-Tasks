#include <iostream>
using namespace std;

// Base class
class Product {
protected:
    string name;
    double price;

public:
    // Constructor of base class
    Product(string n, double p) {
        name = n;
        price = p;
        cout << "Product Constructor Called\n";
    }

    void displayProduct() {
        cout << "Product Name: " << name << endl;
        cout << "Price: " << price << endl;
    }
};

// Derived class
class Electronics : public Product {
private:
    int warrantyYears;

public:
    // Constructor chaining (calling base class constructor)
    Electronics(string n, double p, int w) : Product(n, p) {
        warrantyYears = w;
        cout << "Electronics Constructor Called\n";
    }

    void displayElectronics() {
        displayProduct();
        cout << "Warranty (Years): " << warrantyYears << endl;
    }
};

// Main function
int main() {
    Electronics e1("Laptop", 1200.50, 2);

    cout << "\n--- Product Details ---\n";
    e1.displayElectronics();

    return 0;
}
