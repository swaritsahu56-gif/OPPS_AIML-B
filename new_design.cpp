#include <iostream>
#include <string>
using namespace std;

class Student {
protected:
    int rollNo;
    string name;
    float marks;

public:

    Student() {
        rollNo = 0;
        name = "Unknown";
        marks = 0;
    }


    Student(int r, string n, float m) {
        rollNo = r;
        name = n;
        marks = m;
    }
};

class Exam : public Student {
public:


    Exam(int r, string n, float m) : Student(r, n, m) {
    }

    void display() {
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
        cout << "          " << endl;
    }
};

int main() {

    Exam students[3] = {
        Exam(101, "Swarit", 92.5),
        Exam(102, "Rahul", 85.5),
        Exam(103, "Aman", 78.5)
    };

    for (int i = 0; i < 3; i++) {
        students[i].display();
    }

    return 0;
}