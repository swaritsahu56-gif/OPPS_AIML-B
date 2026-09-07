<<<<<<< HEAD
#include <iostream>
using namespace std;

class Student {
private:
    int marks;

public:
    void setMarks(int m) {
        marks = m;
    }

    int getMarks() {
        return marks;
    }
};

int main() {
    Student s;

    s.setMarks(90);       
    cout << s.getMarks(); 
    // s.marks = 90;
=======
#include <iostream>
using namespace std;

class Student {
private:
    int marks;

public:
    void setMarks(int m) {
        marks = m;
    }

    int getMarks() {
        return marks;
    }
};

int main() {
    Student s;

    s.setMarks(90);       
    cout << s.getMarks(); 
    // s.marks = 90;
>>>>>>> e52a32a32f3938a711762008cf986f15fb28bc42
}