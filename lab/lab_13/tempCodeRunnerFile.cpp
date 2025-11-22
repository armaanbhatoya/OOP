
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
