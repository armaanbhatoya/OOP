// 1. Write a C++ program that reads the contents of a text file character by character using the get()
// function. Encrypt the file by shifting each character’s ASCII value by +1 and store the result in another
// file using the put() function. Then, read the encrypted file, decrypt it by reversing the shift (−1), and save
// the original content into a third file.

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream fin1("original.txt");        
    ofstream fout1("encrypted.txt");      

    if (!fin1 || !fout1) {
        cout << "Error opening original or encrypted file!\n";
        return 0;
    }

    char ch;

    
    while (fin1.get(ch)) {      
        ch = ch + 1;         
        fout1.put(ch);         
    }

    fin1.close();
    fout1.close();



  
    ifstream fin2("encrypted.txt");        
    ofstream fout2("decrypted.txt");      
    if (!fin2 || !fout2) {
        cout << "Error opening encrypted or decrypted file!\n";
        return 0;
    }

    while (fin2.get(ch)) {     
        ch = ch - 1;           
        fout2.put(ch);        
    }

    fin2.close();
    fout2.close();

    cout << "Encryption and decryption completed successfully.\n";
    return 0;
}
