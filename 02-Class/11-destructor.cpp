#include <iostream>
#include <cstdlib> // Needed for the exit function
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
    ~Rectangle(); // Destructor
};
// default constructor is a constructor that takes no arguments
Rectangle::Rectangle(double w, double len){
    width=w;
    length=len;
}

Rectangle::~Rectangle()
 {
 cout << "The destructor is now running.\n";
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


int main()
{
     Rectangle box(3.0,4.0);

    cout << "Width = " << box.getWidth() << endl;
    cout << "Length = " << box.getLength() << endl; // Display box's length.
    cout << "Area = " << box.getArea() << endl;     // Display box's area.
    return 0;
}
