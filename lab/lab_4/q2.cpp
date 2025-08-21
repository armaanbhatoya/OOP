//  Implement a Complex number class with addition and subtraction of two complex numbers.

#include<iostream>
using namespace std;

class Comlex_number{
    public:
        double real_part;
        double complex_part;
};

int main(){
    Comlex_number a,b;
    cout<<"enter two complex numbers (real_part complex_part) respectively: ";
    cin>>a.real_part>>a.complex_part>>b.real_part>>b.complex_part;

    cout<<"addition "<<" = "<<a.real_part+b.real_part<<"+"<<a.complex_part+b.complex_part<<"i"<<endl;

    cout<<"subtraction "<<" = "<<a.real_part-b.real_part<<"+"<<a.complex_part-b.complex_part<<"i"<<endl;

    return 0;
}