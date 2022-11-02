// Implicit and explicit call in the constructor
#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    complex(int, int);
    void printnum()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};
    complex::complex(int x, int y)
    {
        a = x;
        b = y;
    }

int main()
{
    // Implicit call
complex a(3,4);

// Explict call
complex b =complex(6,9);
a.printnum();
b.printnum();
    return 0;
}