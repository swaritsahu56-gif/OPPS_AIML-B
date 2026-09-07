<<<<<<< HEAD
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
        balance += amount;
    }
    void withdraw(float amount){
        balance -= amount;
    }
    void display()
    {
        cout << "Account Number: " << accountNo << endl;
        cout << "Balance: " << balance << endl;
    }
};
    int main() {
        BankAccount obj(12345, 1000);
        obj.display();
        obj.deposit(500);
        obj.display();
        obj.withdraw(300);
        obj.display();
        return 0;
        
=======
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
        balance += amount;
    }
    void withdraw(float amount){
        balance -= amount;
    }
    void display()
    {
        cout << "Account Number: " << accountNo << endl;
        cout << "Balance: " << balance << endl;
    }
};
    int main() {
        BankAccount obj(12345, 1000);
        obj.display();
        obj.deposit(500);
        obj.display();
        obj.withdraw(300);
        obj.display();
        return 0;
        
>>>>>>> e52a32a32f3938a711762008cf986f15fb28bc42
    }