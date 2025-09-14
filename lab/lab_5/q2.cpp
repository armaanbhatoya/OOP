//Write a C++ program that overloads the function area to calculate the area of:

// Circle – area(double radius)
// Rectangle – area(double width, double height)

#include<iostream>
using namespace std;

#define PI 3.141592653589793

void area(double r){
    cout << "Area of circle with radius " << r << " is : " << PI * r * r << endl;
}
void area(double w, double h){
    cout << "Area of rectangle with width " << w << " and height " << h << " is : " << w * h << endl;
}

int main(){
    double r, w, h;

    cout << "enter the radius of circle : ";
    cin >> r;
    area(r);

    cout << "enter the width and height of rectangle respectively : ";
    cin >> w >> h;
    area(w, h);

    return 0;
}