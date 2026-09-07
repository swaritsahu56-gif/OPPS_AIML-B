#include <iostream>
using namespace std;

int main()
{
    int arr[] = {10, 20, 30, 40, 50};

    cout << "Array elements:" << endl;

    for (auto x : arr)
    {
        cout << x << " ";
    }

    return 0;
}