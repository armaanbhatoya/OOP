// 2. Create an array of pointers to derived objects and delete only some of them. Describe which destructors run and which do not.
#include <iostream>
using namespace std;

class Base {
public:
    Base() {
        cout << "Base constructor called\n";
    }

    virtual ~Base() {   // make it virtual to ensure proper cleanup  **************
        cout << "Base destructor called\n";
    }
};

class Derived : public Base {
public:
    Derived() {
        cout << "Derived constructor called\n";
    }

    ~Derived() {
        cout << "Derived destructor called\n";
    }
};

int main() {
    
    Base* arr[3];

    
    arr[0] = new Derived();
    arr[1] = new Derived();
    arr[2] = new Derived();

    cout << "\nDeleting only first and third objects...\n";

    delete arr[0];  
    delete arr[2];  

    cout << "\nProgram ending (arr[1] not deleted)\n";

    return 0;
}
