// Program to introduce friend in class to access the privete data
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
    void printnum()
    {
        cout << "Your complex number is " << a << " + " << b << "i" << endl;
    }
    friend complex sumcmp(complex o1, complex o2)
    {
        complex o3;
        o3.setdata((o1.a + o2.a), (o1.b + o2.b));
        return o3;
    }
};

int main()
{
    complex c1, c2, sum;

    c1.setdata(3, 5);
    c1.printnum();

    c2.setdata(5, 7);
    c2.printnum();

    sum = sumcmp(c1, c2);
    sum.printnum();

    return 0;
}