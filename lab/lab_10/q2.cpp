// Q2. Multilevel Inheritance
// Create a base class Vehicle with attributes brand and speed.
// Derive a class Car that adds fuelType.
// Further derives a class ElectricCar that adds batteryCapacity.
// ● Write a program to read and display details of an electric car.

#include <iostream>
using namespace std;


class Vehicle {
public:
    string brand;
    int speed;

    void getVehicleDetails() {
        cout << "Enter brand: ";
        cin >> brand;
        cout << "Enter speed: ";
        cin >> speed;
    }

    void showVehicleDetails() {
        cout << "Brand: " << brand << endl;
        cout << "Speed: " << speed << " km/h" << endl;
    }
};


class Car : public Vehicle {
public:
    string fuelType;

    void getCarDetails() {
        getVehicleDetails();
        cout << "Enter fuel type: ";
        cin >> fuelType;
    }

    void showCarDetails() {
        showVehicleDetails();
        cout << "Fuel Type: " << fuelType << endl;
    }
};


class ElectricCar : public Car {
public:
    int batteryCapacity;

    void getElectricCarDetails() {
        getCarDetails();
        cout << "Enter battery capacity (in kWh): ";
        cin >> batteryCapacity;
    }

    void showElectricCarDetails() {
        showCarDetails();
        cout << "Battery Capacity: " << batteryCapacity << " kWh" << endl;
    }
};


int main() {
    ElectricCar e1;

    cout << "Enter Electric Car details:\n";
    e1.getElectricCarDetails();

    cout << "\nElectric Car Information:\n";
    e1.showElectricCarDetails();

    return 0;
}

