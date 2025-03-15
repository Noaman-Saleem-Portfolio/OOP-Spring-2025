#include <iostream>
using namespace std;

class Rectangle
{
private:
    double width;
    double length;

public:
    void setWidth(double);
    void setLength(double);
    double getWidth() const;
    double getLength() const;
    double getArea() const;
};

void Rectangle::setWidth(double w)
{
    width = w;
}

void Rectangle::setLength(double len)
{
    length = len;
}

double Rectangle::getWidth() const
{
    return width;
}

double Rectangle::getLength() const
{
    return length;
}

double Rectangle::getArea() const
{
    return width * length;
}

int main()
{
    Rectangle box;
    box.setWidth(12.7);

    box.setLength(4.8);                             // Set box's length to 4.8.
    cout << "Width = " << box.getWidth() << endl;   // Assign box's width to x.
    cout << "Length = " << box.getLength() << endl; // Display box's length.
    cout << "Area = " << box.getArea() << endl;     // Display box's area.

    return 0;
}