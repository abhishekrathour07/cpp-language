#include <iostream>
using namespace std;

int main()
{
    int i, size, arr[30], count = 0, search;
    cout << "Enter the size of an array ";
    cin >> size;
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
            cout << search << " is position at " << i+1 << " position ";
            count++;
        }
    }
    return 0;
}