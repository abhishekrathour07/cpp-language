#include <iostream>
using namespace std;

int main()
{
    float a = 23.24;
    double b = 23.24;
    cout << "size of a is " << sizeof(a) << endl;
    cout << "size of b is " << sizeof(23.24) << endl;
    cout << "size of a is " << sizeof(23.24f) << endl;
    cout << "size of b  is " << sizeof(23.24l) << endl;
    return 0;
}