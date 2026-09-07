#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int marks;

    void setData(string n, int m)
    {
        name = n;
        marks = m;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

void showStudent(Student s)
{
    cout << "Student Details:" << endl;
    cout << "Name: " << s.name << endl;
    cout << "Marks: " << s.marks << endl;
}

int main()
{
    Student s1;

    s1.setData("Swarit", 95);

    showStudent(s1);

    return 0;
}