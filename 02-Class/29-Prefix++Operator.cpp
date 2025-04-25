// This program demonstrates memberwise assignment.
#include <iostream>
using namespace std;

class FeetInches
{
private:
    int feet;        // To hold a number of feet
    int inches;      // To hold a number of inches
    void simplify(); // 3 feet 14 inches would be adjusted to 4 feet 2 inches and
                     // 5 feet −2 inches would be adjusted to 4 feet 10 inches.
public:
    // Constructor
    FeetInches(int f = 0, int i = 0)
    {
        feet = f;
        inches = i;
        simplify();
    }

    // Mutator functions
    void setFeet(int f)
    {
        feet = f;
    }
    void setInches(int i)
    {
        inches = i;
        simplify();
    }

    // Accessor functions
    int getFeet() const
    {
        return feet;
    }

    int getInches() const
    {
        return inches;
    }

    // Overloaded operator functions
    FeetInches operator++(); // Overloaded ++
};

void FeetInches::simplify()
{
    if (inches >= 12)
    {
        feet += (inches / 12);
        inches = inches % 12;
    }
    else if (inches < 0)
    {
        feet -= ((abs(inches) / 12) + 1);
        inches = 12 - (abs(inches) % 12);
    }
}

//**********************************************
// Overloaded ++ operator. *
//**********************************************

FeetInches FeetInches::operator++()
{
    ++inches;
    simplify();
    return *this;
}

int main()
{
    FeetInches distance1(7, 5);

    // Display the result.
    cout << "distance1 = ";
    cout << distance1.getFeet() << " feet, ";
    cout << distance1.getInches() << " inches.\n";

    ++distance1;

    // Display the result.
    cout << "distance1 = ";
    cout << distance1.getFeet() << " feet, ";
    cout << distance1.getInches() << " inches.\n";

    FeetInches distance2 = ++distance1;

    // FeetInches distance2 = distance1.operator++();

    // Display the result.
    cout << "distance2 = ";
    cout << distance2.getFeet() << " feet, ";
    cout << distance2.getInches() << " inches.\n";

    return 0;
}
