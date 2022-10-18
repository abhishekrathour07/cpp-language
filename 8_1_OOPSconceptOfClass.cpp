#include <iostream>
using namespace std;
class employee
{
private:
    int a, b, c;

public:
    int d, e;
    void setdata(int a1, int b1, int c1);
    void getdata()
    {
        cout << "THe value of a is " << a << endl;
        cout << "THe value of b is " << b << endl;
        cout << "THe value of c is " << c << endl;
        cout << "THe value of d is " << d << endl;
        cout << "THe value of e is " << e << endl;
    }
};

void employee ::setdata(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}

int main()
{
    employee abhishek;
    abhishek.d = 67;
    abhishek.e = 69;
    abhishek.setdata(34, 33, 56);
    abhishek.getdata();

    return 0;
}