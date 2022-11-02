// Write ap[rogram to find the greatest of four digits
#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d;
    cout << "Enter the value of a" << endl;
    cin >> a;
    cout << "Enter the value of b" << endl;
    cin >> b;
    cout << "Enter the value of c" << endl;
    cin >> c;
    cout << "Enter the value of d" << endl;
    cin >> d;
    if (a > b && a > c && a > d)
    {
        cout << "a is greater" << endl;
    }
    else if (b > a && b > c && b > d)
    {
        cout << "b is greater " << endl;
    }
    else if (c > a && b < c && c > d)
    {
        cout << "c is greater " << endl;
    }
    else if (d> a && d > c && b < d)
    {
        cout << "D is greater " << endl;
    }
    return 0;
}