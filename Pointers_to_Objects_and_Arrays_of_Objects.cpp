// Pointers to Objects and Arrays of Objects. Design a program using pointers to objects and
// arrays of objects to manage dynamic data structures.
// Algorithm:
// 1. Start
// 2. Define Student class
// 3. Create array of Student objects
// 4. Create pointer to object
// 5. Access members using pointer
// 6. Display student details
// 7. Stop
// Sample Input:
// 101 Amit
// 102 Ravi
// Sample Output:
// 101 Amit
// 102 Ravi
#include <iostream>
using namespace std;
class Student {
private:
    int rollNo;
    string name;
public:
    Student(int roll, string n) {
        rollNo = roll;
        name = n;
    }
    void display() {
        cout << rollNo << " " << name << endl;
    }
};
int main(){
    Student s1(101, "Amit");
    Student s2(102, "Ravi");
    Student* ptr = &s1;
    ptr->display();
    ptr = &s2;
    ptr->display();

}