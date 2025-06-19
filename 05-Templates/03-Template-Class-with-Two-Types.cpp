#include <iostream>
#include <string>
using namespace std;

template <class T1, class T2>
class Pair
{
private:
    T1 first;
    T2 second;

public:
    Pair(T1 f, T2 s)
    {
        first = f;
        second = s;
    }

    void display()
    {
        cout << "First: " << first << ", Second: " << second << endl;
    }

    T1 getFirst()
    {
        return first;
    }

    T2 getSecond()
    {
        return second;
    }
};

int main()
{
    Pair<string, int> person("Noman", 30);
    person.display(); // Output: First: Noman, Second: 30

    Pair<int, double> marks(101, 87.5);
    marks.display(); // Output: First: 101, Second: 87.5

    return 0;
}
