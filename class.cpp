#include <iostream>
using namespace std;

class Student {
    string name;
    float marks;
public:
    void input(){
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter marks: ";
        cin >> marks;
    }
    void display(){
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};
int main(){
    Student s;
    s.input();
    s.display();
    return 0;
}