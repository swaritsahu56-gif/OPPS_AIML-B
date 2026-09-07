#include<iostream>
#include<string>
using namespace std;

class id
{
    protected:
    int roll;
    string name;
    string add;
    public:
    void get_name()
    {
        cout<<"Enter roll number: ";
        cin>>roll;
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter address: ";
        cin>>add;
    }
};

class marks:public id
{
    protected:
    float mark;
    public:
    void get_marks()
    {
        cout<<"Enter marks: ";
        cin>>mark;
    }
};

class display:public marks
{
    public:
    void show()
    {
        cout<<"Roll number: "<<roll<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Address: "<<add<<endl;
        cout<<"Marks: "<<mark<<endl;
    }
};

int main()
{
    display obj;
    obj.get_name();
    obj.get_marks();
    obj.show();
    return 0;
}