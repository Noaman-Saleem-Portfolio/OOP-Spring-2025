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
    void draw() override
    {
        cout << "Drawing a square." << endl;
    }
};

int main()
{

    int opt;
    Shape *shape1 = new Circle();
    Shape *shape2 = new Square();

    Shape *options[2] = {shape1, shape2};

    cout << "Choose a option : " << endl;
    cout << "To draw Circle press 0" << endl;
    cout << "To draw Square press 1" << endl;
    cin >> opt;

    options[opt]->draw();

    Shape shape3;

    // Run-time polymorphism
    // shape1->draw(); // Output: Drawing a circle.
    // shape2->draw(); // Output: Drawing a square.

    // Compile-time polymorphism
    shape3.draw("red"); // Output: Drawing a shape with color: red

    delete shape1;
    delete shape2;

    return 0;
}