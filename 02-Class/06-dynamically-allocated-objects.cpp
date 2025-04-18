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
    // Define a Rectangle pointer.
    Rectangle *rectPtr = nullptr;

    // Dynamically allocate a Rectangle object.
    rectPtr = new Rectangle;

    // Store values in the object's width and length.
    rectPtr->setWidth(10.1);
    rectPtr->setLength(15.0);

    cout << rectPtr->getWidth() << endl;
    cout << rectPtr->getLength() << endl;

    // Delete the object from memory.
    delete rectPtr;
    rectPtr = nullptr;

    return 0;
}