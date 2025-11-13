#include<iostream>

using namespace std;

class Complex{
    int real;
    int img;

    public:

        Complex(){
            real = 0;
            img = 0;
        }
        Complex(int r, int i){
            real = r;
            img = i;
        }

        void print(){
            cout<<real<<" "<<img<<endl;
        }

        //operator overloading
        Complex operator +(Complex c){
            Complex temp;
            temp.real = real + c.real;
            temp.img = img + c.img;
            return temp;
        }

};

int main(){
    Complex c1(2,3), c2(4,5);
    Complex c3(0,0);
    
    c3 = c1+c2;  //because operator overloading of '+'
    c3.print();

    return 0;
}