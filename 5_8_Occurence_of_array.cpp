#include <iostream>
using namespace std;

int main()
{
    int i, size, arr[30], search;
    cout << "Enter the size of an array ";
    cin >> size;
    cout << "Enter the element in the array \n";
    for (i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "ENter the element to be search";
    cin >> search;
    for (i = 0; i < size; i++)
    {
        if (arr[i] == search)
        {
            cout << search << " is position at " << i + 1 << " position ";
            return 0;
        }
    }
    cout << "NO, This no . is not present "; //This will also work .
    return 0;
}