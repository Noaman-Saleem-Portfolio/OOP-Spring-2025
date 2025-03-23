
#include <iostream>
#include "Rectangle.h"
using namespace std;

int main()
{
    Rectangle box;
    box.setWidth(12.7);
    // box.setWidth(-2);

    box.setLength(4.8); // Set box's length to 4.8.
    cout << "Width = " << box.getWidth() << endl;
    cout << "Length = " << box.getLength() << endl; // Display box's length.
    cout << "Area = " << box.getArea() << endl;     // Display box's area.
}
