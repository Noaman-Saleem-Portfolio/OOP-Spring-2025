// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int x=22;
    int* ptr=nullptr;
    ptr=&x;
    cout<<&x<<endl;
    cout<<ptr<<endl;
    cout<<x<<endl;
    cout<<*ptr<<endl;

    return 0;
}