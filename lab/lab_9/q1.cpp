// Design a class Counter that counts how many objects are created. Ensure that your
// implementation satisfies the following conditions (otherwise, no marks will be awarded):
// i. Make the constructor private.
// ii. Provide a static member function create() that creates an object and increases the
// count.
// iii. Provide a function getCount() to return how many objects were created.

#include <iostream>
using namespace std;

class Counter {
    static int count;   

    
    Counter() {
        count++;
    }

public:
   
    static Counter* create() {
        return new Counter();
    }

   
    static int getCount() {
        return count;
    }
};


int Counter::count = 0;

int main() {
    
    Counter* c1 = Counter::create();
    Counter* c2 = Counter::create();
    Counter* c3 = Counter::create();

    cout << "Total objects created: " << Counter::getCount() << endl;

    delete c1;
    delete c2;
    delete c3;

    return 0;
}
