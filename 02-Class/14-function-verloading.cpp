#include <iostream>
#include <cstdlib> // Needed for the exit function
using namespace std;

class Rectangle
{
private:
    double width;
    double length;

public:
    Rectangle(double);
    Rectangle(double, double); // Constructor
    void setWidth(double);
    void setLength(double);
    double getWidth() const;
    double getLength() const;
    double getArea() const;
    void greet(string);
    void greet(string,string);
    ~Rectangle(); // Destructor
};

Rectangle::Rectangle(double w){
    width=w;
    length=4.0;
}

Rectangle::Rectangle(double w, double len){
    width=w;
    length=len;
}

void Rectangle::greet(string name){
    cout<<"Good Morning "<<name<<endl;;
}

void Rectangle::greet(string name1,string name2){
    cout<<"Good Morning "<<name1<<endl;
    cout<<"Good Morning "<<name2<<endl;
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
    Rectangle box(3.0);
    //Rectangle box(3.0,4.0);

    cout << "Width = " << box.getWidth() << endl;
    cout << "Length = " << box.getLength() << endl; // Display box's length.
    cout << "Area = " << box.getArea() << endl;     // Display box's area.

    box.greet("Noaman");
    //box.greet("Noaman","Ali");

    return 0;
}
