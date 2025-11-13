//Write a C++ program to create a String class and do the following:
// a) Write a toggle() member function that converts all alphabetic characters present in an
// input string to lowercase if it is in upper-case and to upper-case if it is in lower-case..
// b) Overload the + operator to allow you to join two strings into one


#include <iostream>
#include <cstring>
using namespace std;

class String {
    char str[100];   
public:
    String() {
        str[0] = '\0';
    }
    String(const char s[]) {
        strcpy(str, s);
    }

    void toggle() {
        for (int i = 0; str[i] != '\0'; i++) {
            if (str[i] >= 'A' && str[i] <= 'Z')
                str[i] = str[i] + 32;  // Convert to lowercase
            else if (str[i] >= 'a' && str[i] <= 'z')
                str[i] = str[i] - 32;  // Convert to uppercase
        }
    }

    String operator+(const String &s) {
        String temp;
        strcpy(temp.str, str);
        strcat(temp.str, s.str);
        return temp;
    }

    void display() {
        cout << str;
    }
};

int main() {
    String s1("Hello"), s2("World");

    cout << "Original String s1: ";
    s1.display();
    cout << endl;

    s1.toggle();
    cout << "After toggle s1: ";
    s1.display();
    cout << endl;

    cout << "Original String s2: ";
    s2.display();
    cout << endl;

    String s3 = s1 + s2;  // Concatenation using overloaded +
    cout << "Concatenated string (s1 + s2): ";
    s3.display();
    cout << endl;

    return 0;
}
