#include <iostream>
using namespace std;

class Base {
public:
    Base() {
        cout << "Base Constructor\n";
    }
     ~Base() {               // ← NOT virtual
        cout << "Base Destructor\n";
    }
};

class Derived : public Base {
public:
    Derived() {
        cout << "Derived Constructor\n";
    }
    ~Derived() {
        cout << "Derived Destructor\n";
    }
};

int main() {
    Base* ptr;  
    Derived d;
    ptr = &d;
   // ← IMPORTANT LINE
    return 0;
}
