// Write a program to read a matrix of size m x n form the keyboard and display the same using function.

#include<iostream>
using namespace std;

void read_matrix(int **matrix, int m, int n){
    cout<<"enter elements : ";
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>matrix[i][j];
        }
    }
}

void display(int **matrix, int m, int n){ //method to pass double pointer to the function
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int m,n;
    cout<<"enter the size of matrix(m,n) : ";
    cin>>m>>n;
    
    int** matrix = new int*[m];
    for (int i = 0; i < m; i++)
    {
        matrix[i]= new int[n];
    }
    
    read_matrix(matrix,m,n);

    display(matrix,m,n);
    
    return 0;
}