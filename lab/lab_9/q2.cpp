// Design a class Complex to represent complex numbers.
// You must implement the following:
// a. Overload the + and - operators as member functions.
// b. Overload the * operator as a friend function.
// c. Overload the << operator (insertion) to print the

#include <iostream>
using namespace std;

class Complex {
    float real, imag;

public:
    Complex(float r = 0, float i = 0) : real(r), imag(i) {}

    Complex operator+(const Complex& c) const {
        return Complex(real + c.real, imag + c.imag);
    }

    Complex operator-(const Complex& c) const {
        return Complex(real - c.real, imag - c.imag);
    }

    friend Complex operator*(const Complex& c1, const Complex& c2);

    friend ostream& operator<<(ostream& out, const Complex& c);
};

// Friend function for *
Complex operator*(const Complex& c1, const Complex& c2) {
    return Complex(
        c1.real * c2.real - c1.imag * c2.imag,
        c1.real * c2.imag + c1.imag * c2.real
    );
}

// Friend function for <<
ostream& operator<<(ostream& out, const Complex& c) {
    out << c.real;
    if (c.imag >= 0)
        out << " + " << c.imag << "i";
    else
        out << " - " << -c.imag << "i";
    return out;
}

int main() {
    Complex c1(3, 2), c2(1, 7);

    cout << "First Complex Number: " << c1 << endl;
    cout << "Second Complex Number: " << c2 << endl;

    Complex sum = c1 + c2;
    Complex diff = c1 - c2;
    Complex product = c1 * c2;

    cout << "\nAddition: " << sum << endl;
    cout << "Subtraction: " << diff << endl;
    cout << "Multiplication: " << product << endl;

    return 0;
}
