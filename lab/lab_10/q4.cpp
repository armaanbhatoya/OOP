// Q4. Hierarchical Inheritance
// Create a base class Account with attributes accountNumber and balance.
// Derive two classes:
// ● SavingsAccount (adds interestRate)
// ● CurrentAccount (adds overdraftLimit)
// display the details of both the accounts.

#include <iostream>
using namespace std;


class Account {
public:
    int accountNumber;
    float balance;

    void getAccountDetails() {
        cout << "Enter Account Number: ";
        cin >> accountNumber;
        cout << "Enter Balance: ";
        cin >> balance;
    }

    void showAccountDetails() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};

class SavingsAccount : public Account {
public:
    float interestRate;

    void getSavingsDetails() {
        getAccountDetails();
        cout << "Enter Interest Rate (%): ";
        cin >> interestRate;
    }

    void showSavingsDetails() {
        cout << "\n--- Savings Account Details ---" << endl;
        showAccountDetails();
        cout << "Interest Rate: " << interestRate << " %" << endl;
    }
};

class CurrentAccount : public Account {
public:
    float overdraftLimit;

    void getCurrentDetails() {
        getAccountDetails();
        cout << "Enter Overdraft Limit: ";
        cin >> overdraftLimit;
    }

    void showCurrentDetails() {
        cout << "\n--- Current Account Details ---" << endl;
        showAccountDetails();
        cout << "Overdraft Limit: " << overdraftLimit << endl;
    }
};

int main() {
    SavingsAccount s;
    CurrentAccount c;

    cout << "Enter details for Savings Account:\n";
    s.getSavingsDetails();

    cout << "\nEnter details for Current Account:\n";
    c.getCurrentDetails();

    cout << "\nDisplaying Account Details:\n";
    s.showSavingsDetails();
    c.showCurrentDetails();

    return 0;
}
