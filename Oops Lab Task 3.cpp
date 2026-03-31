#include<iostream>
using namespace std;

class Product {
private:
    string name;
    double price;
    int quantity;

public:
    // Setter for name
    void setName(string n) {
        if (n.empty()) {
            cout<<"Error: Name cannot be empty!"<<endl;
        } else {
            name=n;
        }
    }

    // Setter for price
    void setPrice(double p) {
        if (p>0) {
            price=p;
        } else {
            cout<<"Error: Price must be greater than 0!"<<endl;
        }
    }

    // Setter for quantity
    void setQuantity(int q) {
        if (q>=0) {
            quantity=q;
        } else {
            cout << "Error: Quantity cannot be negative!" << endl;
        }
    }

    // Getters
    string getName() {
        return name;
    }

    double getPrice() {
        return price;
    }

    int getQuantity() {
        return quantity;
    }
};

int main() {
    Product p;

    string n;
    double pr;
    int q;

    // Taking input
    cout<<"Enter Product Name:";
    getline(cin,n);

    cout<<"Enter Price:";
    cin>>pr;

    cout<<"Enter Quantity:";
    cin>>q;

    // Setting values
    p.setName(n);
    p.setPrice(pr);
    p.setQuantity(q);

    // Display output
    cout<<"\nProduct Details:"<<endl;
    cout<<"Name:"<< p.getName()<<endl;
    cout<<"Price:"<< p.getPrice()<<endl;
    cout<<"Quantity:"<< p.getQuantity()<<endl;

    return 0;
}
