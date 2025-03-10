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

void showData(Student s);
// void showData(Student &s);
// void showData(const Student &s);

int main()
{
    Student s1;
    s1.studentID = 33987;
    s1.gpa = 3.14;
    s1.pData.name = "Ali";
    s1.pData.address = "Johar Town";
    s1.pData.city = "Lahore";

    // cout<<"Student name = "<<s1.pData.name<<endl;
    showData(s1);

    cout << "Name again printed = " << s1.pData.name << endl;

    return 0;
}

void showData(Student s)
{
    cout << s.studentID << endl;
    cout << s.gpa << endl;
    cout << s.pData.name << endl;
    cout << s.pData.address << endl;

    s.pData.name = "Noaman";
}

// void showData(Student &s){
//     cout<<s.studentID<<endl;
//     cout<<s.gpa<<endl;
//     cout<<s.pData.name<<endl;
//     cout<<s.pData.address<<endl;

//     s.pData.name = "Noaman";
// }

// void showData(const Student &s){
//     cout<<s.studentID<<endl;
//     cout<<s.gpa<<endl;
//     cout<<s.pData.name<<endl;
//     cout<<s.pData.address<<endl;

//     s.pData.name = "Noaman";
// }
