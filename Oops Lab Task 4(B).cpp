#include<iostream>
using namespace std;

class BankAccount {
private:
    string accountNumber;
    string accountHolder;
    double balance;

public:
    // Parameterized Constructor
    BankAccount(string accNo, string accHolder, double bal) {
        accountNumber= accNo;
        accountHolder= accHolder;
        balance= bal;
    }

    void showAccountDetails() {
        cout<<"Account Number: "<<accountNumber<<endl;
        cout<<"Account Holder: "<<accountHolder<<endl;
        cout<<"Balance: "<<balance<<endl;
    }
};

int main() {
    // Object created with user-defined values
    BankAccount acc("PK0309800780190","Umer Khan", 100000);

    cout<<"Bank Account Details:"<<endl;
    acc.showAccountDetails();

    return 0;
}
