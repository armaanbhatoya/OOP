// 2. Define a structure Student with the following members:
// string name, int roll_no, float marks Read details from the user.
//  Display the stored information


#include<iostream>
using namespace std;

struct Student{
    string name;
    int roll_no;
    float marks;
};

int main(){
    Student s;

    cout<<"Enter the name of the Student: ";
    getline(cin, s.name);
    cout<<"Enter the roll_no: ";
    cin>> s.roll_no;
    cout<<"Enter the marks: ";
    cin>> s.marks;
    
    cout << "\nStudent Details:\n";
    cout << "Name: " << s.name << endl;
    cout << "Roll Number: " << s.roll_no << endl;
    cout << "Marks: " << s.marks << endl;
    return 0;
}