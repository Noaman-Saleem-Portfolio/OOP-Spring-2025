#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int age;
    float cgpa;

public:
    Student()
    {
        name = "Not-set";
        age = 0;
        cgpa = 0.0;
    }
    Student(string n)
    {
        name = n;
    }
    Student(string n, int a)
    {
        name = n;
        age = a;
    }
    Student(string n, int a, float c)
    {
        name = n;
        age = a;
        cgpa = c;
    }
    void setName(string n)
    {
        name = n;
    }
    void setAge(int a)
    {
        age = a;
    }
    void setCgpa(float c)
    {
        cgpa = c;
    }
    string getName()
    {
        return name;
    }
    int getAge()
    {
        return age;
    }
    float getCgpa()
    {
        return cgpa;
    }
};

int main()
{
    const int ARRAY_SIZE = 5;
    Student students[ARRAY_SIZE];

    // Student students[ARRAY_SIZE] = {Student("Ali")};
    // Student students[ARRAY_SIZE] = {Student("Ali"),Student("Noaman")};
    // Student students[ARRAY_SIZE] = {Student("Ali",33),Student("Noaman",26,3.6)};

    for (int i = 0; i < 5; i++)
    {
        cout << "Name = " << students[i].getName() << " , Age = " << students[i].getAge() << " , CGPA = " << students[i].getCgpa() << endl;
    }

    return 0;
}