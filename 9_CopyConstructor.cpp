// Concept of copy constructor.
#include <iostream>
using namespace std;

class number
{
    int a;

public:
    number() {}
    number(int num)
    {
        a = num;
    }
    void dispaly()
    {
        cout << "The value of number is " << a << endl;
    }
};

int main()
{
    number x, y(6), z;
    y.dispaly();
   
}