// Write a function power() to raise a number m to a power n. The function takes a double value for m and int value for n and returns the result correctly. Use a default value of 2 for n to make the function to calculate squares when this argument is omitted. Write a main that gets the values of m and n from the user to test the function.

#include<iostream>
using namespace std;

double power(double m, int n = 2){
    double result = 1;
    for (int i = 0; i < n; i++)
    {
        result = result * m;
    }
    return result;
}

int main(){
    double m;
    int n;
    cout<<"enter the value of m(base) and n(power) respectively : ";
    cin>>m>>n;
    
    //when only m i passed
    cout<<"when only m is passed, result = "<<power(m)<<endl;
    cout<<"when m and n are passed, result (m^n) = "<<power(m,n)<<endl;
    
    return 0;
}