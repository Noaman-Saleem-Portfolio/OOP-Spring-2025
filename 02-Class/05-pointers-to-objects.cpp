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
    Rectangle myRectangle;        // A Rectangle object
    Rectangle *rectPtr = nullptr; // A Rectangle pointer
    rectPtr = &myRectangle;       // rectPtr now points to myRectangle

    rectPtr->setWidth(12.5);
    rectPtr->setLength(4.8);

    cout << rectPtr->getWidth() << endl;
    cout << rectPtr->getLength() << endl;

    // Delete the object from memory.
    delete rectPtr;
    rectPtr = nullptr;

    return 0;
}