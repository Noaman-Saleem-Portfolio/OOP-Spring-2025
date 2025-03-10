// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

struct PersonInfo
{
    string name,
        address,
        city;
};
struct Student
{
    int studentID;
    PersonInfo pData;
    double gpa;
};

int main()
{
    Student s1;
    s1.studentID = 33987;
    s1.gpa = 3.14;
    s1.pData.name = "Ali";
    s1.pData.address = "Johar Town";
    s1.pData.city = "Lahore";

    cout << "Student name = " << s1.pData.name << endl;

    return 0;
}