#include <iostream>
using namespace std;

class base1
{
    int data1;

public:
    base1(int a)
    {
        data1 = a;
        cout << "base 1 is called " << endl;
    }
    void getbase1()
    {
        cout << "The value of base1 is " << data1 << endl;
    }
};
class base2
{
    int data2;

public:
    base2(int b)
    {
        data2 = b;
        cout << "base 2 is called " << endl;
    }
    void getbase2()
    {
        cout << "The value of base1 is " << data2 << endl;
    }
};
class derived : public base1, public base2
{
    int derived1, derived2;

public:
    derived(int a, int b, int c, int d) : base1(a), base2(b)
    {
        derived1 = c;
        derived2 = d;
        cout << "Derived class is called " << endl;
    }
    void getderived()
    {
        cout << "the value of derived 1 is " << derived1 << endl;
        cout << "the value of derived 2 is " << derived2 << endl;
    }
};
int main(){
    derived abhi(2,3,4,5);
    abhi.getbase1();
    abhi.getbase2();
    abhi.getderived();

    return 0;
}
