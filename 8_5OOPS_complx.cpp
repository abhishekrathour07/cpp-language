#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    void setdata(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    void setdatabysum(complex o1, complex o2)
    {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }
    void printNum()
    {
        cout << "your complex number is " << a << " + " << b << "i" << endl;
    }
};

int main()
{
    complex c1, c2, c3;
    c1.setdata(3, 5);
    c1.printNum();

    c2.setdata(5, 7);
    c2.printNum();

    c3.setdatabysum(c1, c2);
    c3.printNum();

    return 0;
}