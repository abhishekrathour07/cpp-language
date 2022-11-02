//  Program to print matrix.
#include <iostream>
using namespace std;

int main()
{
    int i, j, arr[20][20];
    int a, b, sum = 0;
    cout << "Enter the num of rows";
    cin >> a;
    cout << "Enter the num of column";
    cin >> b;
    cout << "enter the element in the array" << endl;
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "Element of the matrix is " << endl;
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            cout << "\t" << arr[i][j];
            sum = sum + arr[i][j];
        }
        cout << "\n";
    }
    cout << "Sum of the matrix is " << sum;
    return 0;
}
