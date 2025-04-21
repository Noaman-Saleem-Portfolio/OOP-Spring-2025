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
// default constructor is a constructor that takes no arguments
Rectangle::Rectangle(double w, double len)
{
    width = w;
    length = len;
}
// Constructor with default argument
// Rectangle::Rectangle(double w, double len=6){
//    width=w;
//    length=len;
//}

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

int main()
{
    // Define two Rectangle objects.
    Rectangle box1(10.0, 10.0); // width = 10.0, length = 10.0
    Rectangle box2(20.0, 20.0); // width = 20.0, length = 20.0

    // Display each object's width and length.
    cout << "box1's width and length: " << box1.getWidth()
         << " " << box1.getLength() << endl;
    cout << "box2's width and length: " << box2.getWidth()
         << " " << box2.getLength() << endl
         << endl;

    // Assign the members of box1 to box2.
    box2 = box1;

    // Display each object's width and length again.
    cout << "box1's width and length: " << box1.getWidth()
         << " " << box1.getLength() << endl;
    cout << "box2's width and length: " << box2.getWidth()
         << " " << box2.getLength() << endl
         << endl
         << endl;

    // Assign the members of box1 to box3.
    Rectangle box3 = box1;
    cout << "box3's width and length: " << box3.getWidth()
         << " " << box3.getLength() << endl;

    return 0;
}