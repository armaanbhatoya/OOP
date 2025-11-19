#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main() {

    // ------------------- PRODUCT DATA -------------------
    int id[5]    = {101, 102, 103, 104, 105};
    string name[5] = {"Keyboard", "Mouse", "Monitor", "USB Cable", "Webcam"};
    int qty[5]   = {10, 25, 5, 50, 8};
    double price[5] = {599.5, 299.99, 8999.75, 150.0, 1299.0};

    // ------------------- PART ii: Separator Line -------------------
    cout << setfill('-') << setw(44) << "-" << endl;
    cout << setfill(' ');   // reset fill to space


    // ------------------- TABLE HEADER -------------------
    cout << setw(4) << "ID"
         << left  << setw(20) << "Name"
         << right << setw(6) << "Qty"
         << setw(10) << "Price" << endl;

    // ------------------- PART i: Formatting price -------------------
    cout << setiosflags(ios::fixed) << setprecision(2);

    // ------------------- PRINT TABLE -------------------
    for (int i = 0; i < 5; i++) {
        cout << setw(4) << id[i]
             << left << setw(20) << name[i]
             << right << setw(6) << qty[i]
             << setw(10) << price[i]
             << endl;
    }

    // restore formatting flags
    cout << resetiosflags(ios::fixed);

    // ------------------- PART iii: Floating value formatting -------------------
    double val;
    cout << "\nEnter a floating value: ";
    cin >> val;

    // scientific
    cout << setiosflags(ios::scientific) << setprecision(4);
    cout << "\nScientific: " << val << endl;

    // reset
    cout << resetiosflags(ios::scientific);

    // fixed
    cout << setiosflags(ios::fixed) << setprecision(2);
    cout << "Fixed: " << val << endl;

    // reset
    cout << resetiosflags(ios::fixed);


    // ------------------- PART iv: Write to report.txt -------------------
    ofstream fout("report.txt");

    fout << setfill('-') << setw(44) << "-" << endl;
    fout << setfill(' ');

    fout << setw(4) << "ID"
         << left  << setw(20) << "Name"
         << right << setw(6) << "Qty"
         << setw(10) << "Price" << endl;

    fout << setiosflags(ios::fixed) << setprecision(2);

    for (int i = 0; i < 5; i++) {
        fout << setw(4) << id[i]
             << left << setw(20) << name[i]
             << right << setw(6) << qty[i]
             << setw(10) << price[i]
             << endl;
    }

    fout << resetiosflags(ios::fixed);

    fout.close();

    return 0;
}
