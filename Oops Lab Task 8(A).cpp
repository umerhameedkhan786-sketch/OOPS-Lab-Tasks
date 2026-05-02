#include <iostream>
using namespace std;

class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }

    double add(double a, double b) {
        return a + b;
    }

    int add(int a, int b, int c) {
        return a + b + c;
    }
};

int main() {
    Calculator c;

    cout << "Addition of 2 integers: " << c.add(2, 3) << endl;
    cout << "Addition of 2 doubles: " << c.add(2.5, 3.5) << endl;
    cout << "Addition of 3 integers: " << c.add(1, 2, 3) << endl;

    return 0;
}
