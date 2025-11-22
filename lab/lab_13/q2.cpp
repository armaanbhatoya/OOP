// 2. Write a program that prints a table of 5 products. Columns: ID (int), Name (string), Qty (int), Price (double). Use setw() to align columns. ID width 4, Name width 20 (left aligned), Qty width 6 (right), Price width 10 (right).
// i) Extend Problem 1 to print Price with exactly 2 decimal places using setprecision() and
// setiosflags(ios::fixed). After printing the table, restore flags with resetiosflags() so subsequent output is unaffected.
// ii) Before printing the table header, print a separator line of length 44 using setfill('-') and setw(44). Reset fill to space afterwards.
// iii) Read a floating value from the user. First print it using setiosflags(ios::scientific) with setprecision(4).
// Then print it using setiosflags(ios::fixed) with setprecision(2). Use resetiosflags() between prints.
// iv) Write the formatted product table to report.txt using the same formatting as on screen.


// #include <iostream>
// #include <iomanip>
// using namespace std;

// int main() {
//     // Sample product data
//     int id[5] = {101, 102, 103, 104, 105};
//     string name[5] = {"Keyboard", "Mouse", "Monitor", "USB Cable", "Webcam"};
//     int qty[5] = {10, 25, 7, 50, 15};
//     double price[5] = {499.505, 299.9699, 7999.0546, 150.75, 1299.49};

//     // Table Header
//     cout << setw(4) << "ID" 
//          << " " << left << setw(20) << "Name"
//          << right << setw(6) << "Qty"
//          << setw(10) << "Price" << endl;

//     // Table Rows
//     for(int i = 0; i < 5; i++) {
//         cout << setw(4) << id[i] << " "
//              << left << setw(20) << name[i]
//              << right << setw(6) << qty[i]
//              << setw(10) << fixed << setprecision(1) << price[i]
//              << endl;
//     }

//     return 0;
// }


// ---------------------1----------------------------

// #include <iostream>
// #include <iomanip>
// using namespace std;

// int main() {
//     // Sample product data
//     int id[5] = {101, 102, 103, 104, 105};
//     string name[5] = {"Keyboard", "Mouse", "Monitor", "USB Cable", "Webcam"};
//     int qty[5] = {10, 25, 7, 50, 15};
//     double price[5] = {499.5, 299.99, 7999.0, 150.75, 1299.49};

//     // Table Header
//     cout << setw(4) << "ID"
//          << " " << left << setw(20) << "Name"
//          << right << setw(6) << "Qty"
//          << setw(10) << "Price" << endl;

//     // Apply formatting for price (fixed + 2 decimal places)
//     cout << setiosflags(ios::fixed) << setprecision(2);

//     // Table rows
//     for(int i = 0; i < 5; i++) {
//         cout << setw(4) << id[i] << " "
//              << left << setw(20) << name[i]
//              << right << setw(6) << qty[i]
//              << setw(10) << price[i]
//              << endl;
//     }

//     // Restore formatting flags
//     cout << resetiosflags(ios::fixed);

//     return 0;
// }


// ---------------------2-----------------------------------

// #include <iostream>
// #include <iomanip>
// using namespace std;

// int main() {
//     int id[5] = {101, 102, 103, 104, 105};
//     string name[5] = {"Keyboard", "Mouse", "Monitor", "USB Cable", "Webcam"};
//     int qty[5] = {10, 25, 7, 50, 15};
//     double price[5] = {499.5, 299.99, 7999.0, 150.75, 1299.49};

//     // Separator line of length 44
//     cout << setfill('-') << setw(44) << "-" << endl;

//     // Reset fill to space
//     cout << setfill(' ');

//     // Table Header
//     cout << setw(4) << "ID"
//          << " " << left << setw(20) << "Name"
//          << right << setw(6) << "Qty"
//          << setw(10) << "Price" << endl;

//     // Price formatting
//     cout << setiosflags(ios::fixed) << setprecision(2);

//     // Table rows
//     for(int i = 0; i < 5; i++) {
//         cout << setw(4) << id[i] << " "
//              << left << setw(20) << name[i]
//              << right << setw(6) << qty[i]
//              << setw(10) << price[i]
//              << endl;
//     }

//     // Restore formatting
//     cout << resetiosflags(ios::fixed);

//     return 0;
// }


// ------------------------------------3---------------------------

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double x;

    cout << "Enter a floating value: ";
    cin >> x;

    // Scientific format with 4 decimal places
    cout << setiosflags(ios::scientific) << setprecision(4);
    cout << "Scientific: " << x << endl;

    // Reset scientific flag
    cout << resetiosflags(ios::scientific);

    // Fixed format with 2 decimal places
    cout << setiosflags(ios::fixed) << setprecision(2);
    cout << "Fixed: " << x << endl;

    // Reset fixed flag
    cout << resetiosflags(ios::fixed);

    return 0;
}
