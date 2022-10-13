#include <iostream>
using namespace std;

int main()
{
    int a[30], size, i;
    float sum = 0, avg = 0;
    cout << "Enter the size of an array ";
    cin >> size;
    cout << "Enter the element of an array ";
    for (i = 0; i < size; i++)
    {
        cin >> a[i];
        sum = sum + a[i];
        avg = sum / size;
    }
    cout << "Sum of the array is " << sum << endl;
    cout << "average of the array is " << avg << endl;
    return 0;
}