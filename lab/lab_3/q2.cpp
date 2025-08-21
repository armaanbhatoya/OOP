//An electricity board charges the following rates to users – For first 100 units : 40p per unit – For next 200 units : 50p per unit – Beyond 300 units : 60p per unit All users are charged a minimum of Rs.150. If the total cost is more than Rs.250.00 then an additional charges of 15% are added. Write a C++ program using class to read the name of users & number of units consumed & print out the charges with names.

#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

class User_info{
    public:
        string name;
        double units;
        double bill;

};

void calculate(User_info arr[], int i){
    double min_fixed_charge = 150;
    double total_cost;
    double &units = arr[i].units;//aliasing
    if(units>300){
        total_cost = (100*0.40)+(200*0.50)+(units-300)*0.60;
    }
    else if(units>100){
        total_cost = (100*0.40)+(units-100)*0.50;
    }
    else if(units>0){
        total_cost = (units)*0.40;
    }
    
    if(total_cost<min_fixed_charge) total_cost = min_fixed_charge;
    else if(total_cost>250) total_cost+=total_cost*0.15;

    arr[i].bill = total_cost;
}

void display(User_info arr[], int n) {
    cout << "Users INFO :->" << endl;
    cout<<endl;
    for (int i = 0; i < n; i++) {
        cout<<"User "<<i+1<<endl;
        cout << left << setw(10) << "Name:"   << setw(20) << arr[i].name  << endl;
        cout << left << setw(10) << "Units:"  << setw(10) << arr[i].units << endl;
        cout << left << setw(10) << "Bill:"   << setw(10) << arr[i].bill  << endl;

        cout << endl;
    }
        cout << "-----------------------------" << endl;

}    

int main(){
    
    int n;
    cout<<"enter the number of users : ";
    cin>>n;
    User_info* Users = new User_info[n];

    for(int i=0; i<n; i++){
        cout<<"enter user "<<i+1<<" name : ";
        cin.ignore();
        getline(cin,Users[i].name);
        
        cout<<"enter number of units consumed : ";
        cin>>Users[i].units;
        calculate(Users,i);
    }
    
    display(Users,n);

    delete[] Users;

    return 0;
}