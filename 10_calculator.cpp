// Making the calculator .
#include <iostream>
#include <cmath>
using namespace std;

class simplecalculator
{
    int a, b;

public:
    void getdatasimple()
    {
        cout << "Enter the value of a ";
        cin >> a;
        cout << "Enter the value of b ";
        cin >> b;
        cout << endl;
    }
    void operationsimple()
    {
        cout << "THe value of a+b is " << a + b << endl;
        cout << "THe value of a-b is " << a - b << endl;
        cout << "THe value of a*b is " << a * b << endl;
        cout << "THe value of a/b is " << a / b << endl;
        cout << endl;
    }
};
class scientificcalculator{
    int a, b;

public:
    void getdatascientific()
    {
        cout << "Enter the value of a ";
        cin >> a;
        cout << "Enter the value of b ";
        cin >> b;
        cout << endl;
    }
    void operationsentific()
    {
        cout << "THe value of cos(a) is " << cos(a) << endl;
        cout << "THe value of tan(b) is " << tan(b) << endl;
        cout << "THe value of exp(a)  is " << exp(a) << endl;
        cout << "THe value of exp(b) is " << exp(b) << endl;
        cout << endl;
    }
};
class hybridcalculator : public simplecalculator, public scientificcalculator{
};

int main(){
    hybridcalculator c1;

    c1.getdatasimple();
    c1.operationsimple();

    c1.getdatascientific();
    c1.operationsentific();
}
