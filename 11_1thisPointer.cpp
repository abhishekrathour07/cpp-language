#include <iostream>
using namespace std;
class A
{
    int a;

public:
    void setdata(int a)
    {
        // here we use this operator bcz variable name is same .
        this->a = a;
    }
    void getdata()
    {
        cout << "The value of a is " << a << endl;
    }
};
int main()
{
    A abhi;
    abhi.setdata(7);
    abhi.getdata();
    return 0;
}