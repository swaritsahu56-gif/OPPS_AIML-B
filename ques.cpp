// Student Friendship Chain
// Create a class named Student that contains:
// - rollNumber
// - studentName
// - Student* nextStudent
// The nextStudent pointer should store the address of another Student object.
// Perform the following tasks:
// 1. Initialize student details using a constructor.
// 2. Create three Student objects.
// 3. Connect the first student with the second student.
// 4. Connect the second student with the third student.
// 5. Set the nextStudent pointer of the third student to nullptr.
// 6. Display the names and roll numbers of all students using the first student object.
#include <iostream>
using namespace std;
class Student {
public:
    int rollNumber;
    string studentName;
    Student* nextStudent;
    Student(int roll, string name) {
        rollNumber =roll;
        studentName=name;
        nextStudent=nullptr;
    }
};

int main() {
    Student student1(69,"Swarit");
    Student student2(70,"Rahul Gandhi");
    Student student3(71,"Modi");
    student1.nextStudent=&student2;
    student2.nextStudent=&student3;
    student3.nextStudent=nullptr;
    Student* current = &student1;
    while (current != nullptr) {
        cout<< current->studentName<<endl;
        cout<<current->rollNumber<<endl;
        current=current->nextStudent;
    }
    return 0;
}

