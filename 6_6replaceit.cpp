// Concept of replace last value to the first.
#include <iostream>
using namespace std;
int main()
{
    int i, x;
    int arr[] = {1, 2, 3, 4, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    x = arr[n - 1];
    cout << "Element in the array is\n ";
    for (i = n - 1; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = x;
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}