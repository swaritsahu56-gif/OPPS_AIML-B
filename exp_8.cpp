// write a program to pass objects as argument and return objects from function to perform opreations on user- defined data
#include<iostream>
using namespace std;
class B
{
    private:
        int marks;
    public:
        void setMarks(int m)
        {
            marks = m;
        }
        void compare(B S)
        {
            if(marks > S.marks)
                cout << "First object has more marks" << endl;
            else if(marks < S.marks)
                cout << "Second object has more marks" << endl;
            else
                cout << "Both objects have equal marks" << endl;
        }
};
int main()
{
    B S1, S2;
    int m1, m2;

    cout << "Enter marks for first object: ";
    cin >> m1;
    cout << "Enter marks for second object: ";
    cin >> m2;
     S1.setMarks(m1);
  S2.setMarks(m2);
  
    S1.compare(S2);
    return 0;
}