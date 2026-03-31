#include<iostream>
using namespace std;

class Rectangle {
private:
    float length;
    float width;

public:
    // Default Constructor
    Rectangle() {
        length= 1.0;
        width= 1.0;
    }

    // Parameterized Constructor (2 values)
    Rectangle(float l, float w) {
        length= l;
        width= w;
    }

    // Single Parameter Constructor (Square)
    Rectangle(float side) {
        length= side;
        width= side;
    }

    float area() {
        return length * width;
    }

    void display() {
        cout<<"Length: "<<length<<", Width: "<<width<<endl;
        cout<<"Area: "<<area()<<endl;
    }
};

int main() {
    // Using default constructor
    Rectangle r1;

    // Using parameterized constructor
    Rectangle r2(5.0, 3.0);

    // Using single parameter constructor
    Rectangle r3(4.0);

    cout<<"Rectangle 1 (Default):"<<endl;
    r1.display();

    cout<<"\nRectangle 2 (Length & Width):"<<endl;
    r2.display();

    cout<<"\nRectangle 3 (Square):"<<endl;
    r3.display();

    return 0;
}
