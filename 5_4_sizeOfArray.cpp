// Program to find the size of array 
#include <iostream>
using namespace std;

int main()
{
    int a[] = {2, 3, 4, 5, 7, 98, 98, 76, 55, 44, 33, 23, 45, 5, 67, 87, 95};
    int size = sizeof(a) / sizeof(a[1]);
    cout << "Size of total array is " << size;
    return 0;
}