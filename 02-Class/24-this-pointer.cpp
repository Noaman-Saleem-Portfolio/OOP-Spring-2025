// This program demonstrates memberwise assignment.
#include <iostream>
using namespace std;

class Rectangle
{
private:
    double width;
    double length;

public:
    Rectangle(double, double); // Constructor
    void setWidth(double);
    void setLength(double);
    double getWidth() const;
    double getLength() const;
    double getArea() const;
};

Rectangle::Rectangle(double w, double len)
{
    width = w;
    length = len;
}
// constructor with this pointer is a constructor that takes no arguments
// Rectangle::Rectangle(double width, double length)
// {
//     this->width = width;
//     this->length = length;
// }

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

// getter with this pointer
// void Rectangle::setWidth(double width)
// {
//     if (width >= 0)
//         this->width = width;
//     else
//     {
//         cout << "Invalid width\n";
//         exit(EXIT_FAILURE);
//     }
// }

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

int main()
{
    // The this pointer always points to the object that is being used to call the member function.
    // Define two Rectangle objects.
    Rectangle box1(10.0, 20.0); // width = 10.0, length = 20.0

    // Display object's width and length.
    cout << "box1's width and length: " << box1.getWidth()
         << " " << box1.getLength() << endl;

    box1.setWidth(100.0);
    cout << "box1's width: " << box1.getWidth() << endl;

    return 0;
}