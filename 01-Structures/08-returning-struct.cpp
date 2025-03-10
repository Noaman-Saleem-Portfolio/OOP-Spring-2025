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

Student getStudentData();

void showData(const Student &s);

int main()
{
    Student s1;
    s1 = getStudentData();
    showData(s1);

    return 0;
}

Student getStudentData()
{
    Student tempStu;
    cout << "Enter Student ID : ";
    cin >> tempStu.studentID;
    cout << "Enter Name : ";
    cin >> tempStu.pData.name;
    cout << "Enter Address : ";
    // 	  cin>>tempStu.pData.address;
    cin.ignore();
    getline(cin, tempStu.pData.address);
    cout << "Enter City : ";
    cin >> tempStu.pData.city;
    cout << "Enter GPA : ";
    cin >> tempStu.gpa;
    return tempStu;
}

void showData(const Student &s)
{
    cout << s.studentID << endl;
    cout << s.gpa << endl;
    cout << s.pData.name << endl;
    cout << s.pData.address << endl;
    cout << s.pData.city << endl;
}
