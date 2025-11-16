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

    // ofstream hout("sample.txt");
    // string st;
    // cout<<"Enter your name : ";
    // getline(cin,st);
    // hout<<"My name is "<<st;
    // hout.close();

    // ifstream hin("sample.txt");
    // string content;
    // // hin>>content;
    // getline(hin,content);
    // cout<<"This is the content in the file : "<<content<<endl;

    // |--------------------------PART 3 ---------------------------------------------------|

    ofstream out;
    out.open("sample.txt");
    out<<"This is my file \n";
    out<<"Who I am \n";
    out<<"Also";
    out.close();

    ifstream file;
    string st,st2;
    file.open("sample.txt");
    // file>>st>>st2;
    // cout<<st<<st2;

    cout<<"This is the exact content of the file opened :->"<<endl;
    while(file.eof()==0){  //eof() only becomes true if you have gone past EOF
        // file>>st;
        getline(file,st);
        cout<<st<<endl;
    }     
    file.close();

    return 0;
}