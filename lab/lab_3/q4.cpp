//  Following are two string variables.

//       string deskOwner = "Alice";      string anotherPerson = "Bob";
// Declare a constant pointer to deskOwner.
// Change the content of deskOwner using the pointer.
// Attempt to change the pointer to point to anotherPerson — note the error.



#include<iostream>
using namespace std;

int main(){
    string deskOwner = "Alice";      
    string anotherPerson = "Bob";

    string* const p = &deskOwner;
    *p = "Jack";
    cout<<"after changing, deskOwner : "<<*p<<endl;

    // p = &anotherPerson;
    cout<<"Changing to another person: "<<*p<<endl;
    
    return 0;
}   