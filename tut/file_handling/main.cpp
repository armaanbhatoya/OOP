#include<iostream>
#include<fstream>   // required class

using namespace std;

int main(){

    string st = "Armaan";
    string st2;
    // opening file using constructor and writing it
    ofstream out("sample.txt"); //write operation
    out<<st;

    ifstream in("sample.txt"); //opening file using constructor and reading it
    in>>st2;
    cout<<st2;
    return 0;
}