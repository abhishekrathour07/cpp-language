#include <iostream>
using namespace std;
// program to find how much even or odd number in the array and put in differ array.
int main()
{
    int a[20], i, size;
    cout << "Enter the size of an array";
    cin >> size;
    cout << "Enter the element in the array";
    for (i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    cout << "Even number of an array are ";
    for (i = 0; i < size; i++)
    {
        if (a[i] % 2 == 0)
        {
            cout <<" " <<a[i];
        }
    }
    cout << " \n odd number of an array are ";
    for (i = 0; i < size; i++)
    {
        if (a[i] % 2 != 0)
        {
            cout <<" "<< a[i];
        }
    }
    return 0;
}