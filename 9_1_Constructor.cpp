#include <iostream>
using namespace std;
class Complex
{
    int a, b;

public:
    Complex(void)
    {
        a = 4;
        b = 5;
    }
    void printnum()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

int main()
{
    Complex c1, c2;
    c1.printnum();
    c2.printnum();
    return 0;
}