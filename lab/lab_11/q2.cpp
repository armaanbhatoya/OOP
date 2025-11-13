// 2. Create an abstract class Vehicle with a pure virtual function startEngine(). Derive two classes Car and Bike that implement this function.

#include <iostream>
using namespace std;


class Vehicle {
public:
    
    virtual void startEngine() = 0;

    virtual ~Vehicle() {}  // Virtual destructor
};


class Car : public Vehicle {
public:
    void startEngine() override {
        cout << "Car engine started!" << endl;
    }
};

class Bike : public Vehicle {
public:
    void startEngine() override {
        cout << "Bike engine started!" << endl;
    }
};


int main() {
    Vehicle* v1; 

    Car c;
    Bike b;

    v1 = &c;
    v1->startEngine();   

    v1 = &b;
    v1->startEngine();  

    return 0;
}
