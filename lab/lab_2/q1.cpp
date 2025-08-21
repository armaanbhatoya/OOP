// 1.  Write a C++ program that performs the following tasks using functions:
// (i)  sum of two numbers (function with return value).
// (ii) sum  two numbers (function using call by reference).
// (iii)  reverse of a number (function with return value).
// (iv)  check whether the number is prime or not (function returning boolean).

#include <iostream>
using namespace std;

int sumReturn(int a, int b) {
    return a + b;
}

void sumByReference(int &a, int &b, int &result) {
    result = a + b;
}

int reverseNumber(int num) {
    int rev = 0;
    while (num != 0) {
        int digit = num % 10;
        rev = rev * 10 + digit;
        num /= 10;
    }
    return rev;
}

bool isPrime(int n) {
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main() {
    int a, b;

    cout << "Enter two numbers for sum (using return): ";
    cin >> a >> b;
    cout << "Sum (using return): " << sumReturn(a, b) << endl;

    int result;
    cout << "Enter two numbers for sum (using call by reference): ";
    cin >> a >> b;
    sumByReference(a, b, result);
    cout << "Sum (using call by reference): " << result << endl;

    int num;
    cout << "Enter a number to reverse: ";
    cin >> num;
    cout << "Reverse: " << reverseNumber(num) << endl;

    cout << "Enter a number to check prime: ";
    cin >> num;
    if (isPrime(num))
        cout << num << " is a prime number." << endl;
    else
        cout << num << " is not a prime number." << endl;

    return 0;
}
