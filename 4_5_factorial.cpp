// Write a program tofind the factorial of given number .
#include <iostream>
using namespace std;

int main()
{
    int num, i, factorial = 1;
    cout << "Enter the number to find factorial";
    cin >> num;
    for (i = 1; i <= num; i++)
    {
        cout << "Order of factorial is " <<  i<< endl;
        factorial = factorial * i;
    }
    cout << "Factorial of " << num << " is " << factorial << endl;
    return 0;
}