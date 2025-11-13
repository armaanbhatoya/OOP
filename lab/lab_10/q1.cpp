// Q1. Single Inheritance
//      Create a class Person with data members name and age.
//      Create a derived class Student that adds rollNo and marks.
//      ● Write methods to input and display all details of a student.

#include <iostream>
using namespace std;

class Person
{
    string name;
    int age;

public:
    Person()
    {
        name = "";
        age = 0;
    }
    Person(string n, int a)
    {
        name = n;
        age = a;
    }

    void get_data()
    {
        cout << "Name : " << name << endl
             << "Age : " << age << endl;
    }
};

class Student : public Person
{
    long long roll_no;
    int marks;

public:
    Student() : Person()
    {
        roll_no = 0;
        marks = 0;
    }
    Student(string n, int a, long long r, int m) : Person(n,a)
    {
        roll_no = r;
        marks = m;
    }
    void get_data()
    {   
        Person::get_data();
        cout << "Roll number : " << roll_no << endl
             << "Marks : " << marks << endl;
    }
};

int main()
{   
    Student A("Armaan",19,24103022,100);
    A.get_data();

    return 0;
}