#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;  

public:
    
    BankAccount(double initialBalance = 0.0) {
        if (initialBalance >= 0)
            balance = initialBalance;
        else {
            cout << "Invalid initial balance. Setting balance to 0.\n";
            balance = 0.0;
        }
    }

    
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: $" << amount << endl;
        } else {
            cout << "Deposit amount must be positive.\n";
        }
    }

    
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrew: $" << amount << endl;
        } else {
            cout << "Invalid withdraw amount.\n";
        }
    }

    
    double getBalance() const {
        return balance;
    }
};

int main() {
    BankAccount myAccount(100.0);  

    cout << "Initial Balance: $" << myAccount.getBalance() << endl;

    myAccount.deposit(50.0);       
    myAccount.withdraw(30.0);      

    cout << "Final Balance: $" << myAccount.getBalance() << endl;

    return 0;
}

