#include<iostream>
#include<fstream>   // required class

using namespace std;

int main(){

    // string st = "Armaan";
    // string st2;
    // // // opening file using constructor and writing it
    // // ofstream out("sample.txt"); //write operation
    // // out<<st;

    // ifstream in("sample.txt"); //opening file using constructor and reading it
    // in>>st2;
    // cout<<st2;
    // getline(in, st2); //it gets the whole line with spaces
    // cout<<st2;

    // -------------------- part 2 ---------------------------------

    ofstream hout("sample.txt");
    string st;
    cout<<"Enter your name : ";
    getline(cin,st);
    hout<<"My name is "<<st;
    hout.close();

    return 0;
}