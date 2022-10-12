#include <iostream>
using namespace std;

int Factorial(int x)
{
    if (x == 0 || x == 1)
    {
        return 1;
    }
    else
    {
        return x * Factorial(x - 1);
    }
}
int main()
{
    int x;
    cout << "Enter the value of x ";
    cin >> x;
    cout << "Factorial of " << x << " is " << Factorial(x) << endl;
    return 0;
}