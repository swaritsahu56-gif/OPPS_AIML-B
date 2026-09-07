#include <iostream>
using namespace std;

class BankAccount{
private:
    int accountNo;
    float balance;

public:
    BankAccount(int acc, float bal){
        accountNo = acc;
        balance = bal;
    }

    void deposit(float amount){
        if (amount > 0){
            balance = balance + amount;
            cout << "Amount deposited successfully." << endl;
        }
        else{
            cout << "Invalid deposit amount." << endl;
        }
    }


    void withdraw(float amount) {
        if (amount <= 0) {
            cout << "Invalid withdrawal amount." << endl;
        }
        else if (amount > balance) {
            cout << "Insufficient balance." << endl;
        }
        else {
            balance = balance - amount;
            cout << "Amount withdrawn successfully." << endl;
        }
    }

    void display() {
        cout << "Account Number: " << accountNo << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main()
{
    BankAccount obj(12345, 1000);

    obj.display();

    obj.deposit(500);
    obj.display();

    obj.withdraw(300);
    obj.display();

    return 0;
}
