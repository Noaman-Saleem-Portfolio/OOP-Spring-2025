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
    FeetInches operator+(const FeetInches &); // Overloaded +
    FeetInches operator-(const FeetInches &); // Overloaded −
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

// Another version of simplify function
// void FeetInches::simplify()
// {
//     // Convert entire measurement to inches
//     int totalInches = feet * 12 + inches;

//     // Convert back to feet and inches
//     feet = totalInches / 12;
//     inches = totalInches % 12;

//     // If inches is negative, adjust to ensure it's in the 0–11 range
//     if (inches < 0)
//     {
//         feet--;
//         inches += 12;
//     }
// }

//**********************************************
// Overloaded binary + operator. *
//**********************************************

FeetInches FeetInches::operator+(const FeetInches &right)
{
    FeetInches temp;

    temp.inches = inches + right.inches;
    temp.feet = feet + right.feet;
    temp.simplify();
    return temp;
}

//**********************************************
// Overloaded binary − operator. *
//**********************************************

FeetInches FeetInches::operator-(const FeetInches &right)
{
    FeetInches temp;

    temp.inches = inches - right.inches;
    temp.feet = feet - right.feet;
    temp.simplify();
    return temp;
}

int main()
{
    int feet, inches; // To hold input for feet and inches

    // Create three FeetInches objects. The default arguments
    // for the constructor will be used.
    FeetInches first, second, third;

    // Get a distance from the user.
    cout << "Enter a distance in feet and inches: ";
    cin >> feet >> inches; // 6 5

    // Store the distance in the first object.
    first.setFeet(feet);
    first.setInches(inches);

    // Get another distance from the user.
    cout << "Enter another distance in feet and inches: ";
    cin >> feet >> inches; // 3 10

    // Store the distance in second.
    second.setFeet(feet);
    second.setInches(inches);

    // Assign first + second to third.
    third = first + second;

    // Display the result.
    cout << "first + second = ";
    cout << third.getFeet() << " feet, ";
    cout << third.getInches() << " inches.\n";

    // Assign first − second to third.
    third = first - second;

    // Display the result.
    cout << "first - second = ";
    cout << third.getFeet() << " feet, ";
    cout << third.getInches() << " inches.\n";

    return 0;
}
