#include <iostream>
#include <cstdlib> // Needed for the exit function
using namespace std;

class Rectangle
{
private:
    double width;
    double length;

public:
    Rectangle(); // Constructor
    void setWidth(double);
    void setLength(double);
    double getWidth() const;
    double getLength() const;
    double getArea() const;
};
// default constructor is a constructor that takes no arguments
Rectangle::Rectangle(){
    width=0.0;
    length=0.0;
}

void Rectangle::setWidth(double w)
{
    if (w >= 0)
        width = w;
    else
    {
        cout << "Invalid width\n";
        exit(EXIT_FAILURE);
    }
}

void Rectangle::setLength(double len)
{
    if (len >= 0)
        length = len;
    else
    {
        cout << "Invalid length\n";
        exit(EXIT_FAILURE);
    }
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

// If you write a class with no constructor whatsoever, when the class is compiled C++ will
// automatically write a default constructor that does nothing. For example, the first version
// of the Rectangle class had no constructor; so, when the class was compiled C++ generated
// the following constructor:

// Rectangle::Rectangle()
// { }

int main()
{
    //Rectangle box;

    Rectangle *rectPtr = nullptr;
    rectPtr = new Rectangle;

    //cout << "Width = " << box.getWidth() << endl;
    //cout << "Length = " << box.getLength() << endl; // Display box's length.
    //cout << "Area = " << box.getArea() << endl;     // Display box's area.

    cout << "Width = " << rectPtr->getWidth() << endl;
    cout << "Length = " << rectPtr->getLength() << endl; // Display box's length.
    cout << "Area = " << rectPtr->getArea() << endl;

    return 0;
}
