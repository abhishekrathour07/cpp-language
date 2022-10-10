#include <iostream>
using namespace std;

int main()
{
    int rate, principal, month;

    cout << "Enter the principal" << endl;
    cin >> principal;
    cout << "Enter the rate " << endl;
    cin >> rate;
    cout << "Enter the month " << endl;
    cin >> month;
    float simpleIntrst = (principal * rate * month)/100;

    cout << " SimpleIntrst is " << simpleIntrst;

    return 0;
}
