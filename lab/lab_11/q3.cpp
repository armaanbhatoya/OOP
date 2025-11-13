// 3. Create two base classes A and B, each having a virtual function display().
// Derive a class C from both A and B, overriding the display() function.
// Call display() through pointers of type A* and B*.

#include <iostream>
using namespace std;


class A {
public:
    virtual void display() {  
        cout << "Display from class A" << endl;
    }
};

class B {
public:
    virtual void display() {  
        cout << "Display from class B" << endl;
    }
};

class C : public A, public B {
public:
    void display() override { 
        cout << "Display from derived class C" << endl;
    }
};


int main() {
    C obj;      
    A* ptrA;    
    B* ptrB;   

    ptrA = &obj;
    ptrB = &obj;


    ptrA->display();   

    
    ptrB->display();  

    return 0;
}
