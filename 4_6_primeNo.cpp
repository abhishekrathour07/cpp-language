#include <iostream>
using namespace std;

int main()
{
    int num, i, min = 0, prime = 0;
    cout << "Enter the number to check prime:";
    cin >> num;
    min = num / 2;
    for (i = 2; i <= min; i++)
    {
        if (num % i == 0)
        {
            cout << "Number is not prime";
            prime = 1;
            break;
        }
    }
    if (prime == 0)
        cout<<"Number is prime";
    return 0;
}