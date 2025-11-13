// Q5. Hybrid Inheritance (Virtual Base Class)
// Create a class Person with a name.
// Derive Employee and Student from Person.

// Create a class WorkingStudent derived from both Employee and
// Student. ● Avoid ambiguity using virtual base classes and display

// details.

#include <iostream>
using namespace std;

class Person {
public:
    string name;

    void getPersonDetails() {
        cout << "Enter Name: ";
        cin >> name;
    }

    void showPersonDetails() {
        cout << "Name: " << name << endl;
    }
};

class Employee : virtual public Person {
public:
    int employeeID;
    float salary;

    void getEmployeeDetails() {
        cout << "Enter Employee ID: ";
        cin >> employeeID;
        cout << "Enter Salary: ";
        cin >> salary;
    }

    void showEmployeeDetails() {
        cout << "Employee ID: " << employeeID << endl;
        cout << "Salary: " << salary << endl;
    }
};

class Student : virtual public Person {
public:
    int rollNumber;
    float marks;

    void getStudentDetails() {
        cout << "Enter Roll Number: ";
        cin >> rollNumber;
        cout << "Enter Marks: ";
        cin >> marks;
    }

    void showStudentDetails() {
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
    }
};

class WorkingStudent : public Employee, public Student {
public:
    void getWorkingStudentDetails() {
        getPersonDetails();
        getEmployeeDetails();
        getStudentDetails();
    }

    void showWorkingStudentDetails() {
        cout << "\n--- Working Student Details ---" << endl;
        showPersonDetails();
        showEmployeeDetails();
        showStudentDetails();
    }
};


int main() {
    WorkingStudent ws;

    cout << "Enter Working Student Details:\n";
    ws.getWorkingStudentDetails();

    ws.showWorkingStudentDetails();

    return 0;
}
