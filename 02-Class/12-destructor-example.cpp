#include <iostream>
#include <cstdlib> // Needed for the exit function
using namespace std;

class Rectangle
{
private:
    double* width;
    double* length;

public:
    Rectangle();
    Rectangle(double, double); // Constructor
    void setWidth(double);
    void setLength(double);
    double getWidth() const;
    double getLength() const;
    double getArea() const;
    ~Rectangle(); // Destructor
};
// default constructor is a constructor that takes no arguments
Rectangle::Rectangle(){
    width= new double;
    *width=0.0;
    length=new double;
    *length=0.0;
}

Rectangle::Rectangle(double w, double len){
    width= new double;
    *width=w;
    length=new double;
    *length=len;
}

Rectangle::~Rectangle()
 {
    cout << "The destructor is now running.\n";
    delete width;
    delete length;
 }

void Rectangle::setWidth(double w)
{
    if (w >= 0){
        width= new double;
        *width = w;
    }
    else
    {
        cout << "Invalid width\n";
        exit(EXIT_FAILURE);
    }
}

void Rectangle::setLength(double len)
{
    if (len >= 0){
        length=new double;
        *length=len;
    }
    else
    {
        cout << "Invalid length\n";
        exit(EXIT_FAILURE);
    }
}

double Rectangle::getWidth() const
{
    return *width;
}

double Rectangle::getLength() const
{
    return *length;
}

double Rectangle::getArea() const
{
    return *width * *length;
}


int main()
{
    // Scenario 1
    //Rectangle box(3.0,4.0);

    //cout << "Width = " << box.getWidth() << endl;
    //cout << "Length = " << box.getLength() << endl; // Display box's length.
    //cout << "Area = " << box.getArea() << endl;     // Display box's area.

    // Scenario 2
    // Define a Rectangle pointer.
    Rectangle *rectPtr = nullptr;

    // Dynamically allocate a Rectangle object.
    rectPtr = new Rectangle;

    // Store values in the object's width and length.
    rectPtr->setWidth(3.0);
    rectPtr->setLength(4.0);

    cout << rectPtr->getWidth() << endl;
    cout << rectPtr->getLength() << endl;
    cout << rectPtr->getArea() << endl;

    // Delete the object from memory.
    delete rectPtr;
    rectPtr = nullptr;

    return 0;
}
