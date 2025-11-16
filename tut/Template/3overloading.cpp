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

template<class T>              // ************
void Armaan<T>:: display(){
    cout<< data<<endl;
}

//-----------------------------template function overloading
void func(int a){
    cout<<"I am first func()"<<a<<endl;
}

template<class T>
void func(T a){
    cout<<"I am templatised func()"<<a<<endl;
}


int main(){
    Armaan<int> A(22);
    A.display();

    func(5);      //Exact match takes the highest priority
    func(5.26);
    return 0;
}