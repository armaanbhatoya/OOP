#include<iostream>

using namespace std;

template<class T>
void swapp(T &a, T &b){
    T temp = a;
    a = b;
    b = temp;
}

int main(){
    char a = 'a';
    char b = 'b';
    cout<<"before"<<endl<<" a= "<<a<<", b= "<<b<<endl;
    swapp(a,b);
    cout<<"after"<<endl<<" a= "<<a<<", b= "<<b<<endl;

    return 0;
}