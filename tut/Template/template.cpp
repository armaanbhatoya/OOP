#include<iostream>

using namespace std;

//  |------------------------PART 1------------------|
// template<class T>
// class vector{
//     public:
//         T * arr;
//         int size;
        
//         vector(T m){
//             size = m;
//             arr = new T[size];
//         }
//         T dotProduct(vector &v){
//             T d = 0;
//             for(int i=0; i<size; i++){
//                 d += this->arr[i] * v.arr[i];
//             }
//             return d;
//         }
// };

// int main(){
//     vector <float> v1(3);
//     v1.arr[0] = 1.4;
//     v1.arr[1] = 3.3;
//     v1.arr[2] = .1;
    
//     vector<float> v2(3);
//     v2.arr[0]=.1;
//     v2.arr[1]=1.90;
//     v2.arr[2]=4.1;

//     cout<< v1.dotProduct(v2)<<endl;
//     return 0;
// }



// |----------------------PART 2-----------------------------|
// ------------Templates with Multiple Parameters------------

// template<class T1, class T2>
// class myClass{
//     public:
//         T1 data1;
//         T2 data2;
//         myClass(T1 a, T2 b){
//             data1 = a;
//             data2 = b;
//         }
//         void display(){
//             cout<<this->data1<<endl<<this->data2<<endl;
//         }
// };

// int main() {
//     // Creating an object with char and float data types
//     myClass<char, float>  obj('C', 1.8);
//     obj.display();

//     return 0;
// }


// |-------------------PART 3 ------------------------------------------|
//  DEFAULT PARAMETERS


// Class template definition with default parameters
template <class T1= int, class T2 = float, class T3 = char>
class Harry {
public:
    T1 a;
    T2 b;
    T3 c;

    // Constructor to initialize member variables
    Harry(T1 x, T2 y, T3 z) {
        a = x;
        b = y;
        c = z;
    }

    // Function to display the values
    void display() {
        std::cout << "The value of a is " << a << std::endl;
        std::cout << "The value of b is " << b << std::endl;
        std::cout << "The value of c is " << c << std::endl;
    }
};

int main() {
    // Using default template parameters (int, float, char)
    Harry<float> h(4, 6.4, 'c');
    h.display();

    cout << endl; // For better output separation

    // Specifying custom template parameters (float, char, char)
    Harry<int, float> g(1.4, 'o', 'c');
    g.display();

    return 0;
}

