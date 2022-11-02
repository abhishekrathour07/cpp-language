//  Program to find how much even and odd num in the given array
#include <iostream>
using namespace std;

int main()
{
    int a[30], size, i, even = 0, odd = 0;
    cout << "Enter the size of an array ";
    cin >> size;
    cout << "Enter the element in the array ";
    for (i = 0; i < size; i++)
    {
        cin >> a[i];
        if (a[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    cout << "Even number are " << even << endl;
    cout << "odd number are " << odd << endl;
    return 0;
}