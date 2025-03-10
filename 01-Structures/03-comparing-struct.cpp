// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

struct Employee
{
    // string first_name;
    // string last_name;
    // string designation;
    string first_name, last_name, designation;
    int age;
    int salary;
    char gender;
    bool isPakistani;
};

int main()
{
    Employee e1, e2;
    cout << "Enter employee 1 age : ";
    cin >> e1.age;

    cout << "Enter employee 2 age : ";
    cin >> e2.age;

    // cout<<e1 == e2;
    // cout<< e1.age == e2.age;
    cout << (e1.age == e2.age);

    return 0;
}