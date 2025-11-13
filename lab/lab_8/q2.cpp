// Write a C++ program to overload input and output operators >> and << to take complex
// numbers from the user. Now overload addition and multiplication operators + and* to
// demonstrate addition and multiplication of two complex numbers.

#include <iostream>
using namespace std;

class Complex {
    float real;
    float imag;

public:
    Complex() : real(0), imag(0) {}

    Complex(float r, float i) : real(r), imag(i) {}

    friend istream& operator>>(istream &in, Complex &c) {
        cout << "Enter real part: ";
        in >> c.real;
        cout << "Enter imaginary part: ";
        in >> c.imag;
        return in;
    }

    friend ostream& operator<<(ostream &out, const Complex &c) {
        out << c.real;
        if (c.imag >= 0)
            out << " + " << c.imag << "i";
        else
            out << " - " << -c.imag << "i";
        return out;
    }

    Complex operator+(const Complex &c) {
        return Complex(real + c.real, imag + c.imag);
    }

    Complex operator*(const Complex &c) {
        return Complex(real * c.real - imag * c.imag, real * c.imag + imag * c.real);
    }
};

int main() {
    Complex c1, c2, sum, product;

    cout << "Enter first complex number:\n";
    cin >> c1;
    cout << "Enter second complex number:\n";
    cin >> c2;

    cout << "\nFirst complex number: " << c1 << endl;
    cout << "Second complex number: " << c2 << endl;

    sum = c1 + c2;
    cout << "\nAddition: " << sum << endl;

    product = c1 * c2;
    cout << "Multiplication: " << product << endl;

    return 0;
}
