#include <iostream>
using namespace std;

int main()
{

    int a = 8, b = 6;
    cout << "These are logical operator " << endl;
    cout << "The value of (a==b) && (a>=b) is " << ((a == b) && (a > b)) << endl;
    cout << "The value of (a == b) || (a.b) is " << ((a == b) || (a > b)) << endl;
    cout << "The value of (! (a>=b)) is " << (!(a >= b)) << endl;

    return 0;
}