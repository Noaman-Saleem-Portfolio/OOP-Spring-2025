// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main()
{
    int age;
    string fullName;

    cout << "Enter your age : ";
    cin >> age;

    cout << age << endl;

    cout << "Enter your full name : ";
    // cin>>fullName;
    cin.ignore();
    getline(cin, fullName);

    cout << fullName;

    return 0;
}