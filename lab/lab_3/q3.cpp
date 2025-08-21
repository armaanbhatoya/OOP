//Following are two string variables.

//              string book1 = "C++ Basics"; 
//              string book2 = "Advanced Networking";


// Declare a and point it to book1.

// Print the book title via the pointer.

// Repoint it to book2 and print again.

// Try to modify the book title via the pointer — note what happens.


#include<iostream>
using namespace std;

int main(){
    string book1 = "C++ Basics"; 
    string book2 = "Advanced Networking";

    string* p = &book1;
    cout<< "book1: " <<*p<<endl;

    p = &book2;
    cout<< "book2 : " <<*p<<endl;
    
    *p = "ABC";
    cout<< "pointer is now: " <<*p<<endl;

    cout << "book2 is now: " << book2 << endl;

    return 0;
}