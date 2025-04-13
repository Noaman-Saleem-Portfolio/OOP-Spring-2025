#include <iostream>
using namespace std;

class Tree
{
private:
    static int objectCount; // Static member variable.
public:                     // Constructor
    Tree()
    {
        objectCount++;
    }
    // Accessor function for objectCount
    int getObjectCount() const
    {
        return objectCount;
    }
};
// Definition of the static member variable, written
// outside the class.
int Tree::objectCount = 0;

int main()
{
    // Define three Tree objects.
    Tree oak;
    Tree elm;
    Tree pine;
    // Display the number of Tree objects we have.
    cout << "We have " << pine.getObjectCount() << " trees in our program!\n";
    return 0;
}