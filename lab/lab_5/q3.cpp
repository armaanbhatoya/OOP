//Create two classes DM and DB which store the value of distances. DM stores distances in meters and centimeters and DB in feet and inches. Write a program that can read values for the class objects and add one object of DM with another object of DB. Use a friend function to carry out the addition operation. The object stores the results may be a DM object or DB object, depending on the units in which the results are required. The display should be in the format of feet and inches or meters and centimeters depending on the object on display.


#include <iostream>
using namespace std;

class DB; 

class DM {
    float meters;
    float centimeters;

public:
    DM(float m = 0, float cm = 0) {
        meters = m;
        centimeters = cm;
    }

    void input() {
        cout << "Enter distance in meters and centimeters: ";
        cin >> meters >> centimeters;
    }

    void display() {
        cout << meters << " meters " << centimeters << " centimeters" << endl;
    }

    friend DM add(const DM &d1, const DB &d2); 
};

class DB {
    float feet;
    float inches;

public:
    DB(float f = 0, float in = 0) {
        feet = f;
        inches = in;
    }

    void input() {
        cout << "Enter distance in feet and inches: ";
        cin >> feet >> inches;
    }

    void display() {
        cout << feet << " feet " << inches << " inches" << endl;
    }

    friend DM add(const DM &d1, const DB &d2); // friend function
};


const float METER_TO_FEET = 3.28084;
const float CM_TO_INCH = 0.393701;

DM add(const DM &d1, const DB &d2) {
    
    float totalMeters = d1.meters;
    float totalCentimeters = d1.centimeters;

    
    float metersFromFeet = d2.feet / METER_TO_FEET;
    float cmFromInches = d2.inches / CM_TO_INCH;

    totalMeters += metersFromFeet;
    totalCentimeters += cmFromInches;

  
    if (totalCentimeters >= 100) {
        totalMeters += (int)(totalCentimeters / 100);
        totalCentimeters = (int)totalCentimeters % 100;
    }

    return DM(totalMeters, totalCentimeters);
}

int main() {
    DM d1;
    DB d2;

    d1.input();
    d2.input();

    cout << "\nFirst distance (DM): ";
    d1.display();

    cout << "Second distance (DB): ";
    d2.display();

    DM result = add(d1, d2);

    cout << "\nResult (in DM format): ";
    result.display();

    return 0;
}
