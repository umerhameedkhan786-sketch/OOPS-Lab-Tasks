#include <iostream>
using namespace std;

class Employee {
public:
    virtual double calculateSalary() {
        cout << "Base Employee salary calculation called." << endl;
        return 0;
    }
};

class PermanentEmployee : public Employee {
private:
    double basicSalary, bonus;

public:
    PermanentEmployee(double b, double bo) {
        basicSalary = b;
        bonus = bo;
    }

    double calculateSalary() {
        return basicSalary + bonus;
    }
};

class ContractEmployee : public Employee {
private:
    double hourlyRate, hoursWorked;

public:
    ContractEmployee(double r, double h) {
        hourlyRate = r;
        hoursWorked = h;
    }

    double calculateSalary() {
        return hourlyRate * hoursWorked;
    }
};

int main() {
    Employee* emp;

    PermanentEmployee p(40000, 5000);
    ContractEmployee c(800, 30);

    emp = &p;
    cout << "Permanent Employee Salary: " << emp->calculateSalary() << endl;

    emp = &c;
    cout << "Contract Employee Salary: " << emp->calculateSalary() << endl;

    return 0;
}
