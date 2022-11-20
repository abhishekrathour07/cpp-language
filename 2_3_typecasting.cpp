// Typecasting concept.
#include <iostream>
using namespace std;
  
int main()
{
    int x = 20;
    float y = 23.23;

    cout << "The value of x is " << float(x) << endl;
    cout << "The value of x is " << (float)x << endl;
    cout << "The value of y is " << (float)y << endl;
    cout << "The value of y is " << float(y) << endl;
    cout << "The value of x + y is " << x + int(y) << endl;

    return 0;
}