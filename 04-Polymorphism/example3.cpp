#include <iostream>
using namespace std;

class Shape
{
public:
    // Virtual function for run-time polymorphism
    virtual void draw()
    {
        cout << "Drawing a shape." << endl;
    }

    // Non-virtual function (compile-time polymorphism example)
    void draw(string color)
    {
        cout << "Drawing a shape with color: " << color << endl;
    }
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
    void draw()
    {
        cout << "Drawing a square." << endl;
    }
};

int main()
{
    Shape *shape1;

    int opt;
    cout << "Choose a option : " << endl;
    cout << "To draw Circle press 1" << endl;
    cout << "To draw Square press 2" << endl;
    cin >> opt;

    if (opt == 1)
        shape1 = new Circle;
    if (opt == 2)
        shape1 = new Square;

    // shape1 = new Circle;

    shape1->draw();
    delete shape1;
}
