// An election is contested by five candidates. 
// The candidates are numbered 1 to 5 and a voting 
// is done by marking the candidate number in a ballot paper. 
// Write a C++ program to read the ballot and count the votes 
// cast for each candidate using an array variable count. 
// In case, a number read is outside the range 1 to 5 the ballot 
// should be considered as a ‘spoilt ballot’, and the program 
// should also count the number of spoilt ballots.

#include<iostream>
using namespace std;

int main(){
    int count[5]={0};
    int spoilt=0;
    int n=1;//vote
    
    while(true){
        cout<<"enter vote (0 to stop) : ";
        cin>>n;
        if(n==0) break;
        if(n>0 && n<=5) count[n-1]++;
        else spoilt++;
    }

    for(int i=0; i<5; i++){
        cout<<"Candidate "<<i+1<<" -> "<<count[i]<<endl;
    }
    cout<<"Spoilt votes -> "<<spoilt<<endl;
    return 0;
}