#include<iostream>

using namespace std;

template<class T>
class Armaan{
    public:
        T data;
        Armaan(T a){
            data = a;
        }
        void display();
};

template<class T>
void Armaan<T>:: display(){
    cout<< data;
}

int main(){
    Armaan<int> A(22);
    A.display();

    return 0;
}