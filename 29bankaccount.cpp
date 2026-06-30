#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string accountHolder;
    double balance;

public:
    // Constructor
    BankAccount(string name, double initialBalance) {
        accountHolder = name;
        balance = initialBalance;
    }
    
    // Deposit money
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: ₹" << amount << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }
    
    // Withdraw money
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: ₹" << amount << endl;
        } else {
            cout << "Invalid withdrawal or insufficient balance!" << endl;
        }
    }
    
    // Display balance
    void display() {
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Final Balance: ₹" << balance << endl;
    }
};

int main() {
    BankAccount account("Satyam Singh", 5000);
    
    cout << "=== Bank Operations ===" << endl;
    account.deposit(2000);
    account.withdraw(1500);
    account.deposit(500);
    account.withdraw(100);
    
    cout << "\n=== Final Status ===" << endl;
    account.display();
    
    return 0;
}