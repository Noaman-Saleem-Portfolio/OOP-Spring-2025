// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main()
{
    int *x;
    x = new int;
    cout << x << endl;
    cout << *x << endl;
    // x=88;
    *x = 88;
    cout << x << endl;
    cout << *x << endl;
    delete x;

    return 0;
}