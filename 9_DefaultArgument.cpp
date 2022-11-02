// Programming releted to copy constructor.
#include <iostream>
using namespace std;

class simple
{
    int data1, data2, data3;

public:
    simple(int a, int b = 9, int c = 9)
    {
        data1 = a;
        data2 = b;
        data3 = c;
    }
    void printdata()
    {
        cout << "The value of data1 , data2 , data3 is " << data1 << "," << data2 << "," << data3 << endl;
    }
};
int main()
{
    simple d1(4, 9), d2(76), d3(0);
    d1.printdata(); 
    d2.printdata();
    d3.printdata(); 
}