<<<<<<< HEAD
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
=======
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
>>>>>>> e52a32a32f3938a711762008cf986f15fb28bc42
}