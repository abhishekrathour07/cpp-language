// Concept of constructor how to dinamically call the constructor.
#include <iostream>
using namespace std;

class deposite
{
    int principal, year;
    float interestRate, returnValue;

public:
    deposite() {}
    deposite(int p, int y, int r)
    {
        principal = p;
        year = y;
        interestRate = r;
        returnValue = principal;
        for (int i = 0; i < y; i++)
        {
            returnValue = returnValue * (1 + interestRate);
        }
    }
    void show();
};
void deposite ::show()
{
    cout << endl
         << "Principal amount  " << principal << " Return value after year "
         << year << "year is " << returnValue << endl;
}
int main(){
 deposite bd1, bd2;
    int p, y;
    float r;
    
    
    
    cout<<"Enter the value of p y and r"<<endl;
    cin>>p>>y>>r;
    bd1 = deposite(p, y, r);
    bd1.show();

    cout<<"Enter the value of p y and R"<<endl;
    cin>>p>>y>>r;
    bd2 = deposite(p, y, r);
    bd2.show();
    return 0;

    return 0;
}