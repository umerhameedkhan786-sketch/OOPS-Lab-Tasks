#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "This is Base class show function" << endl;
    }
};

class Derived : public Base {
public:
    void show() {
        cout << "This is Derived class show function" << endl;
    }
};

int main() {
    Base* ptr;
    Derived d;

    ptr = &d;
    ptr->show();  // Calls Derived version (runtime polymorphism)

    return 0;
}
