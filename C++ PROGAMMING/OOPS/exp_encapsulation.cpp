#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string accountNumber;
    double balance;

public:
    BankAccount(string accNum, double initialBalance) {
        accountNumber = accNum;
        balance = initialBalance;
    }

    void deposit(double amount) {
        balance += amount;
    }

    bool withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
            return true; // Withdrawal successful
        }
        return false; // Insufficient funds
    }

    double getBalance() {
        return balance;
    }

    string getAccountNumber() {
        return accountNumber;
    }
};

int main() {
    BankAccount myAccount("123456789", 1000.0);

    myAccount.deposit(500.0);
    cout << "Account Number: " << myAccount.getAccountNumber() << endl;
    cout << "Current Balance: INR" << myAccount.getBalance() << endl;

    if (myAccount.withdraw(400.0)) {
        cout << "Withdrawal successful" << endl;
    } else {
        cout << "Insufficient funds" << endl;
    }

    cout << "Current Balance: INR" << myAccount.getBalance() << endl;

    return 0;
}


/*Certainly! Let's break down the `BankAccount` class and its usage in the `main` function:

1. **BankAccount Class:**
   - **Private Members:**
     - `accountNumber` (string): Stores the account number.
     - `balance` (double): Stores the account balance.

   - **Public Member Functions:**
     - **Constructor (`BankAccount(string accNum, double initialBalance)`)**
       - Initializes `accountNumber` and `balance` with the provided values.
     
     - **`void deposit(double amount)`**
       - Increases the account balance by the specified `amount`.
     
     - **`bool withdraw(double amount)`**
       - Checks if the account has sufficient balance to withdraw the specified `amount`.
       - If yes, it deducts the `amount` from the balance and returns `true` (withdrawal successful); otherwise, it returns `false` (insufficient funds).

     - **`double getBalance()`**
       - Returns the current account balance.

     - **`string getAccountNumber()`**
       - Returns the account number.

2. **Main Function:**
   - **Object Creation:**
     - Creates a `BankAccount` object `myAccount` with an initial balance of $1000.
   
   - **Depositing and Withdrawing:**
     - Deposits $500 into `myAccount`.
     - Tries to withdraw $200 from `myAccount`.
       - If successful, it prints "Withdrawal successful"; otherwise, it prints "Insufficient funds".

   - **Output:**
     - Prints the current account number and balance.

In summary, this code demonstrates encapsulation by hiding the internal data (account number and balance) and providing public methods to interact with the `BankAccount` object, ensuring data integrity and controlled access.*/