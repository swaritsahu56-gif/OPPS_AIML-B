
//create a class std with data member->name & marks.and also create a member function setdata anfd use this pointer to execute the std class
#include <iostream>
using namespace std;

class Student {
    string name;
    int marks;

public:
    void setData(string n, int m) {
        this->name = n;
        this->marks = m;
    }
    void display() {
        cout << "Name: " << this->name << endl;
        cout << "Marks: " << this->marks << endl;
    }
};
int main() {
    Student obj;
    obj.setData("John", 90);
    obj.display();

    return 0;
}