#include <iostream>
using namespace std;

class Rectangle
{
    double width;
    double length;
};

int main()
{
    Rectangle box;
    box.width = 2.2; // error: 'double Rectangle::width' is private within this context

    return 0;
}