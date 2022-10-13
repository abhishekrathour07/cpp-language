#include <iostream>
using namespace std;

int sumnum(int n)
{
    if (n != 0)
    {
        return n + sumnum(n - 1);
    }
    else
    {
        return n;
    }
}
int main()
{
    int n;
    cout << "Enter the natural num to find sum ";
    cin >> n;
    cout << "Sum of natural number are = " << sumnum(n);

    return 0;
}