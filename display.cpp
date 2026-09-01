#include <iostream>
using namespace std;

class student
{
    int roll;
    int marks;
    string name;

public:
    void display()
    {
        cout << "Roll: ";
        cin >> roll;

        cout << "Name: ";
        cin >> name;

        cout << "Marks: ";
        cin >> marks;

    
        cout << "Roll: " << roll << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
}; 

int main()
{
    student s;
    s.display();

    return 0;
}