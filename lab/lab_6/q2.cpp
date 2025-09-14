//Write a program that defines three functions: int square(int) int cube(int) int
// increment(int) Store them in an array of function pointers. Use a loop to
// apply all functions to a number entered by the user.

#include <iostream>
using namespace std;

int square(int n){
    return n * n;
}

int cube(int n){
    return n*n*n;
}

int increment(int n){
    return n + 1;
}

int main(){
    int n;
    int (*funcArr[])(int) = {square,cube,increment};
    int size = sizeof(funcArr) / sizeof(funcArr[0]);
    cout<<"enter the number : ";
    cin>>n;

    for (int i = 0; i < 3; i++)
    {
        cout << "Result of function " << i + 1 << ": " << funcArr[i](n) << endl;
    }
    
    return 0;
}