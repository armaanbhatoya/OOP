// 1. Write a C++ program to demonstrate runtime polymorphism using virtual functions.

// Create a base class Shape with a virtual function area(). Derive two classes Circle and Rectangle which override the area() function to compute their respective areas. Use base class pointers to invoke derived class methods.

#include <iostream>
using namespace std;

class Shape {
public:
    virtual void area() {
        cout << "Area of  shape.\n";
    }
};

class Circle : public Shape {
    float radius;
public:
    Circle(float r) {
        radius = r;
    }

    void area() override {   
        cout << "Area of Circle: " << 3.14 * radius * radius << endl;
    }
};

class Rectangle : public Shape {
    float length, width;
public:
    Rectangle(float l, float w) {
        length = l;
        width = w;
    }

    void area() override {
        cout << "Area of Rectangle: " << length * width << endl;
    }
};

int main() {
    Shape* shapePtr;   
    Circle c(5.0);
    Rectangle r(4.0, 6.0);

    
    shapePtr = &c;
    shapePtr->area();   
    
    shapePtr = &r;
    shapePtr->area();   

    return 0;
}
