// Program to find maximum value of array.
#include <iostream>
using namespace std;

int main()
{

    int array[50], size, i, max = 0;
    cout << "Enter the size if the array";
    cin >> size;
    cout << "Enter the element of an array ";
        max = array[0];
    for (i = 0; i < size; i++)
    {
        cin >> array[i];
        if (array[i] > max){
            max = array[i];
    }
    }
    cout << "The maximum value of an array is " << max;
    return 0;
}