#include <iostream>
using namespace std;

class B{
    static int var;
    friend int function();
};
int B::var = 0;
int function(){
    B::var++;
    return B::var;
}
int main(){
    cout << function();
    return 0;
}