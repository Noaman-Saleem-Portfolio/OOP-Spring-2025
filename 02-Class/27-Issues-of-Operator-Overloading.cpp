// This program demonstrates memberwise assignment.
#include <iostream>
using namespace std;

class Weird
{
private:
    int value;

public:
    Weird(int v)
    {
        value = v;
    }
    void operator=(const Weird &right)
    {
        cout << right.value << endl;
    }
};

int main()
{
    Weird a(5), b(10);
    a = b;

    return 0;
}

// Another operator overloading issue is that you cannot change the number of operands
// taken by an operator. The = symbol must always be a binary operator. Likewise, ++ and
// −− must always be unary operators.

// The only operators that cannot be overloaded are
// ?: . .* :: sizeof