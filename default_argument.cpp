#include <iostream>
using namespace std;

class Student
{
public:
    void display(string name = "Unknown", int marks = 0)
    {
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    Student s;

    s.display();
    cout << endl;

    s.display("Swarit", 90);

    return 0;
}