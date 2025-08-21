
#include<iostream>
#include <string>
using namespace std;

struct Student{
    string name;
    int roll_no;
    float marks;
};

int main(){
   int n;
    cout<<"Enter the number of students: ";
    cin>>n;
    Student *students =new Student[100];//dynamic array allocation
    for(int i = 0; i<n; i++){
        cout<<"\nenter the details of student"<<i+1<<":-> "<<endl;
        cout<<"Enter the name: ";
        cin.ignore(); // <-- clears leftover newline
        getline(cin, students[i].name);
        cout<<"Enter the roll_no: ";
        cin>> students[i].roll_no;
        cout<<"Enter the marks: ";
        cin>> students[i].marks;
    }

    for(int i = 0; i<n; i++){
        cout<<"\nDetails of student"<<i+1<<":-> "<<endl;
        cout << "Name: " << students[i].name << endl;
        cout << "Roll Number: " << students[i].roll_no << endl;
        cout << "Marks: " << students[i].marks << endl;
    }

     
    return 0;
}