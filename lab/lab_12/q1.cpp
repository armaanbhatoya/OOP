// 1. Create a class Person and two derived classes Employee and Student, inherited from class Person. Now create a class Manager which is derived from two base classes. Employee and Student. Show the use of the virtual base class.

#include <iostream>
using namespace std;


class Person {
public:
    string name;
    int age;

    void getData() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }

    void displayData() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

// Derived class 1 (virtual inheritance)
class Employee : virtual public Person {
public:
    int empID;

    void getEmployeeData() {
        cout << "Enter employee ID: ";
        cin >> empID;
    }

    void displayEmployeeData() {
        cout << "Employee ID: " << empID << endl;
    }
};

// Derived class 2 (virtual inheritance)
class Student : virtual public Person {
public:
    int rollNo;

    void getStudentData() {
        cout << "Enter roll number: ";
        cin >> rollNo;
    }

    void displayStudentData() {
        cout << "Roll No: " << rollNo << endl;
    }
};

// Derived class from both Employee and Student
class Manager : public Employee, public Student {
public:
    string department;

    void getManagerData() {
        cout << "Enter department: ";
        cin >> department;
    }

    void displayManagerData() {
        cout << "Department: " << department << endl;
    }
};


int main() {
    Manager m;

    cout << "--- Enter Manager Details ---" << endl;
    m.getData();            // From Person
    m.getEmployeeData();    // From Employee
    m.getStudentData();     // From Student
    m.getManagerData();     // From Manager

    cout << "\n--- Manager Details ---" << endl;
    m.displayData();
    m.displayEmployeeData();
    m.displayStudentData();
    m.displayManagerData();

    return 0;
}
