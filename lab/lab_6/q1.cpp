// Print multiplication table (1–10) in a formatted way using setw(4) (refer Figure below)

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    
    cout << setw(4) << " ";
    for (int i = 1; i <= 10; ++i) {
        cout << setw(4) << i;
    }
    cout << endl;

  
    for (int row = 1; row <= 10; ++row) {
        cout << setw(4) << row;
        for (int col = 1; col <= 10; ++col) {
            cout << setw(4) << row * col;
        }
        cout << endl;
    }
    return 0;
}
