// Concept of Multiple Inheritance .
#include <iostream>
using namespace std;
class base1
{
protected:
    int init1;

public:
    void setinit1(int a)
    {
        init1 = a;
    }
};
class base2
{
protected:
    int init2;

public:
    void setinit2(int a)
    {
        init2 = a;
    }
};
class base3
{
protected:
    int init3;

public:
    void setinit3(int a)
    {
        init3 = a;
    }
};
class derived : public base1, public base2, public base3
{
public:
    void show()
    {
        cout << "The value of base1 is " << init1 << endl;
        cout << "The value of base2 is " << init2 << endl;
        cout << "The value of base3 is " << init3 << endl;
        cout << "The sum of base1,base12,base3  is " << init1 +init2 +init3 << endl;

    }
};
int main()
{
    derived abhi;
    abhi.setinit1(34);
    abhi.setinit2(11);
    abhi.setinit3(45);
    abhi.show();



    return 0;
}