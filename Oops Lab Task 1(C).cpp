#include <iostream>
using namespace std;

struct Student
{
    string firstName;
    string lastName;
    int rollNumber;
    float marks;

    void displayStudentInfo()
    {
        cout<<"Full Name: "<<firstName<<" "<<lastName<<endl;
        cout<<"Marks: "<<marks<<endl;
    }
};

int main()
{
    // Pointer to structure
    Student *ptr = new Student;

    // Dynamically assigning values
    cout<<"Enter First Name: ";
    cin>>ptr->firstName;

    cout<<"Enter Last Name: ";
    cin>>ptr->lastName;

    cout<<"Enter Roll Number: ";
    cin>>ptr->rollNumber;

    cout<<"Enter Marks: ";
    cin>>ptr->marks;

    cout<<"\n--- Student Information ---\n";

    // Calling member function using pointer
    ptr->displayStudentInfo();

    delete ptr;   // Free memory

    return 0;
}
