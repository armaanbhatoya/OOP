#include <iostream>
// #include <fstream>
// #include <iomanip>
// using namespace std;

// int main() {

//     int id[5] = {101, 102, 103, 104, 105};
//     string name[5] = {"Keyboard", "Mouse", "Monitor", "USB Cable", "Webcam"};
//     int qty[5] = {10, 25, 7, 50, 15};
//     double price[5] = {499.5, 299.99, 7999.0, 150.75, 1299.49};

//     ofstream fout("report.txt");

//     // ----- Separator line -----
//     fout << setfill('-') << setw(44) << "-" << endl;
//     fout << setfill(' ');

//     // ----- Header -----
//     fout << setw(4) << "ID"
//          << " " << left << setw(20) << "Name"
//          << right << setw(6) << "Qty"
//          << setw(10) << "Price" << endl;

//     // ----- Price formatting -----
//     fout << setiosflags(ios::fixed) << setprecision(2);

//     // ----- Table Rows -----
//     for (int i = 0; i < 5; i++) {
//         fout << setw(4) << id[i] << " "
//              << left << setw(20) << name[i]
//              << right << setw(6) << qty[i]
//              << setw(10) << price[i]
//              << endl;
//     }

//     // Reset flags
//     fout << resetiosflags(ios::fixed);

//     fout.close();

//     cout << "Table successfully written to report.txt" << endl;

//     return 0;
// }
