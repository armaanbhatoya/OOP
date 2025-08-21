// 1. Write a C++ program that performs the following operations on an integer array:
// (i) Insert an element at a specific position
// (ii) Delete an element at a specific position.
// (iii) Search for an element.
// (iv) Update the value of an element.
// (v) Sort the array in ascending order.
// (vi) Display the array elements.

#include<iostream>
using namespace std;


void display(int arr[], int n) {
    cout << "Array elements: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void insert_ele(int arr[], int &n, int pos, int value){
    if(pos<0 || pos>n)  {
        cout << "Invalid position!" << endl;
        return;
    }
    for(int i=n;i>pos; i--){
        arr[i] = arr[i - 1];
    }
    arr[pos] = value;
    n++;
}

int search_ele(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key)
            return i;
    }
    return -1;
}

void delete_ele(int arr[], int &n, int pos){
    if(pos<0 || pos>n)  {
        cout << "Invalid position!" << endl;
        return;
    }
    for (int i = pos; i < n - 1; i++)
        arr[i] = arr[i + 1];
    n--;
}

void update_ele(int arr[], int n, int pos, int value) {
    if (pos < 0 || pos >= n) {
        cout << "Invalid position!" << endl;
        return;
    }
    arr[pos] = value;
}

void sortArray(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}


int main(){
    
    int n;
    cout<<"enter the size of array: ";
    cin>>n;
    int* arr = new int[n];
    cout<<"enter array elements: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<endl;
    
    while(true){
        cout<<"\n1. Insert an element at a specific position"<<endl;
        cout<<"2. Delete an element at a specific position."<<endl;
        cout<<"3. Search for an element"<<endl;
        cout<<"4. Update the value of an element"<<endl;
        cout<<"5. Sort the array in ascending order"<<endl;
        cout<<"6. Display the array elements."<<endl;
        cout<<"7. EXIT\n"<<endl;

        int x;
        int pos,value;
        cin>>x;
        switch (x)
        {
        case 7:
            return 0;
            break;
        case 1:
            cout<<"enter position(index) and value: ";
            cin>>pos>>value;
            insert_ele(arr,n,pos,value);
            break;

        case 2:
            cout<<"enter position(index): ";
            cin>>pos;
            delete_ele(arr,n,pos);
            break;
            
        case 3:
            int key;
            cout<<"enter element to search: ";
            cin>>key;
            search_ele(arr,n,key)>0?cout<<key<<"is present at index"<<search_ele(arr,n,key)<<endl:cout<<key<<"is not present\n";
            
            break;    

        case 4:
            cout<<"enter position(index) and value of the element that you want to update: ";
            cin>>pos>>value;
            update_ele(arr,n,pos,value);
            break;     

        case 5:
            sortArray(arr,n);
            cout<<"Array is Sorted";
            break;

        case 6: 
            display(arr,n);
            break;
        default:
            cout<<"enter valid number(1-7)";
            break;
        }
    }
    
    
    return 0;
}