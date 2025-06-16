#include <iostream>
using namespace std;

class Shape
{
public:
    // Pure Virtual function for Abstract Class
    virtual void draw() = 0;
};

class Circle : public Shape
{
public:
    // Overriding the virtual function
    void draw() override
    {
        cout << "Drawing a circle." << endl;
    }
};

class Square : public Shape
{
public:
    // Overriding the virtual function
    void draw() override
    {
        cout << "Drawing a square." << endl;
    }
};

int main()
{
    Shape *shape1 = new Circle();
    Shape *shape2 = new Square();
    // this line will generate an Error
    // cannot declare variable ‘shape3’ to be of abstract type ‘Shape’
    // Shape shape3;

    // Run-time polymorphism
    shape1->draw(); // Output: Drawing a circle.
    shape2->draw(); // Output: Drawing a square.

    delete shape1;
    delete shape2;

    return 0;
}