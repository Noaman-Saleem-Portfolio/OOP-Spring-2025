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
    Employee e1;
    cout << "Enter employee's First Name : ";
    cin >> e1.first_name;

    cout << "Enter employee's Last Name : ";
    cin >> e1.last_name;

    cin.ignore();
    cout << "Enter employee's designation : ";
    getline(cin, e1.designation);

    return 0;
}