#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream file("example.txt", ios::in);

    file.seekg(0, ios::end);
    char c;
    file.get(c);
    cout<<c;
    int size = file.tellg();
    file.seekg(-2,ios::end);
    file.get(c);
    cout<<c;
    file.seekg(0, ios::beg);

    cout << "File size = " << size << " bytes\n";

    return 0;
}
