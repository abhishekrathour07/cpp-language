// Program to find the occourance of array / or searchinf element 
#include <iostream>
using namespace std;

int main()
{
    int i, size, arr[30], search,c;
    cout << "Enter the size of an array ";
    cin >> size;
    for (i = 0; i < size; i++)
    {
    cout << "Enter the element in the array"<<i+1<<endl;
        cin >> arr[i];
    }
    cout << "ENter the element to be search";
    cin >> search;
    for (i = 0; i < size; i++)
    {
        if (arr[i] == search)
        {
            cout << search << " is position at " << i + 1 << " position ";
             c=1;
        }
    }
    if (c==0)
    cout << "NO, This no . is not present\n "; //This will also work .
    return 0;
}