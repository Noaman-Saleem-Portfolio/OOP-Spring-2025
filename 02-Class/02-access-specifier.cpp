#include <iostream>
using namespace std;

class Rectangle
{
public:
    double width;
    double length;
};

int main()
{
    Rectangle box;
    box.width = 2.2;
    cout << box.width;

    return 0;
}