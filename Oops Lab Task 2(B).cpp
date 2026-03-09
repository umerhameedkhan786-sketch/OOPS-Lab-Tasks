#include <iostream>
using namespace std;

class Rectangle {
private:
    int length;
    int width;

public:
    void setDimensions();
    int area();
    int perimeter();
};

void Rectangle::setDimensions() {
    cout << "Enter Length: ";
    cin >> length;

    cout << "Enter Width: ";
    cin >> width;
}

int Rectangle::area() {
    return length * width;
}

int Rectangle::perimeter() {
    return 2 * (length + width);
}

int main() {
    Rectangle r1;

    r1.setDimensions();

    cout << "Area: " << r1.area() << endl;
    cout << "Perimeter: " << r1.perimeter() << endl;

    return 0;
}
