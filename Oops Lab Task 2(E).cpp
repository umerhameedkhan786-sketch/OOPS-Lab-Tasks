#include <iostream>
using namespace std;

class Calculator {
private:
    float num1, num2;

public:
    void input() {
        cout << "Enter first number: ";
        cin >> num1;

        cout << "Enter second number: ";
        cin >> num2;
    }

    void add() {
        cout << "Addition: " << num1 + num2 << endl;
    }

    void subtract() {
        cout << "Subtraction: " << num1 - num2 << endl;
    }

    void multiply() {
        cout << "Multiplication: " << num1 * num2 << endl;
    }

    void divide() {
        if (num2 != 0)
            cout << "Division: " << num1 / num2 << endl;
        else
            cout << "Division by zero not possible" << endl;
    }
};

int main() {
    Calculator c;
    int choice;

    c.input();

    cout << "\n1.Add\n2.Subtract\n3.Multiply\n4.Divide\n";
    cout << "Choose operation: ";
    cin >> choice;

    switch(choice) {
        case 1: c.add(); break;
        case 2: c.subtract(); break;
        case 3: c.multiply(); break;
        case 4: c.divide(); break;
        default: cout << "Invalid choice";
    }

    return 0;
}
