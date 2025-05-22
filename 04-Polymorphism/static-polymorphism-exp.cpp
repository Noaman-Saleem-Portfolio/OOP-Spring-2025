#include <iostream>
using namespace std;

class Shape
{
public:
    // Virtual function for run-time polymorphism
    void draw()
    {
        cout << "Drawing a shape." << endl;
    }

    // Non-virtual function (compile-time polymorphism example)
    void draw(string color)
    {
        cout << "Drawing a shape with color: " << color << endl;
    }
};

int main()
{
    Shape s1;
    // s1.draw();
    s1.draw("red");
}