#include <iostream>
using namespace std;

int c = 6;

int main()
{
    int a, b, c;
    cout << "ENter the value of a " << endl;
    cin >> a;
    cout << "Enter the value of b " << endl;
    cin >> b;
    c = a + b;
    cout << "The value of c is " << c << endl;
    cout << " the value of global c is  " << ::c << endl;
    return 0;
}