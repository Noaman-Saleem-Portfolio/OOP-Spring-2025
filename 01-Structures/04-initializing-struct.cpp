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

    // May initialize only some members:
    Employee e1 = {"Noaman", "Saleem", "web Dev", 22, 70000};

    cout << e1.designation;

    //   Cannot skip over members:
    //     Employee e2 = {"Noaman","Saleem",, 22, 70000};
    //   cout<<e1.designation;

    return 0;
}