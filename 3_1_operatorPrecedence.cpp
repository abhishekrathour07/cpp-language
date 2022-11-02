// Operator precedenc .
#include <iostream>
// #include <iomanip>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter the value of a " << a << endl;
    cin >> a;
    cout << "Enter the value of b " << b << endl;
    cin >> b;
    c = (((((a + b) - 45) + b) + 89) - 23);
    cout << "sum =" << c << endl;
    return 0;
}