// Create an enum Size { Small=1, Medium=2, Large=3 };

// Ask the user for a size (1–3) and store it in the enum variable.

// Calculate the bill amount based on:

// Small → ₹150

// Medium → ₹250

// Large → ₹400

#include <iostream>
using namespace std;

enum Size
{
    Small = 1,
    Medium = 2,
    Large = 3
};

int main()
{
    int choice;
    cout << "Enter size (1=Small, 2=Medium, 3=Large): ";
    cin >> choice;

    Size s = static_cast<Size>(choice);

    int bill = 0;
    switch (s)
    {
    case Small:
        bill = 150;
        break;
    case Medium:
        bill = 250;
        break;
    case Large:
        bill = 400;
        break;
    default:
        cout << "Invalid size!" << endl;
        return 0;
    }

    cout << "Bill amount = Rs." << bill << endl;

    return 0;
}