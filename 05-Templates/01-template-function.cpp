// A template function allows you to write a single function that works with different data types. Instead of writing separate functions for int, float, double, etc., you can use a template.

#include <iostream>
using namespace std;

// int add(int a, int b) {
//     return a + b;
// }

// double add(double a, double b) {
//     return a + b;
// }

template <typename T>
T add(T a, T b)
{
    return a + b;
}

int main()
{
    cout << "Sum of ints: " << add(5, 10) << endl;        // int
    cout << "Sum of doubles: " << add(5.5, 10.3) << endl; // double

    return 0;
}
