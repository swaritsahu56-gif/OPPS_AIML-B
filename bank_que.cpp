#include <iostream>
using namespace std;

class bank
{
private:
    int accno;
    float balance;

public:
    void getdata()
    {
        cout << "Enter account number: ";
        cin >> accno;
        cout << "Enter balance: ";
        cin >> balance;
    }

    void display()
    {
        cout << "Account number: " << accno << endl;
        cout << "Balance: " << balance << endl;
    }
};
int main(){
    
    bank b;
    b.getdata();
    b.display();
    return 0;
}