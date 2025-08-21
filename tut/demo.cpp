#include<iostream>
using namespace std;

class person{
    public:
        person(){
            cout<<"parent constructor\n";
        }
        ~person(){
            cout<<"parent destructor\n";
        }
        string name;
        int age;
};

class student: public person{
    public:
    student(){
            cout<<"child constructor\n";
    }
    ~student(){
            cout<<"child destructor\n";
    }
    int roll_no;
    
    void getInfo(){
        cout<<"name :"<<name<<endl;
        cout<<"age :"<<age<<endl;
        cout<<"roll number :"<<roll_no<<endl;
    }
};

int main(){
    student s1;
    s1.name="Armaan Bhatoya";
    s1.age=19;
    s1.roll_no=22;

    s1.getInfo();
    return  0;
}