#include <iostream>
using namespace std;

int main()
{
    int arr[5][5], arr1[5][5], a, b, i, j, sumarr[5][5];
    cout << "Enter the size of the row ";
    cin >> a;
    cout << "Enter the size of the column ";
    cin >> b;
    cout << "Enter the element in the 1st matrix\n";
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "Enter the element in matrix 2" << endl;
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            cin >> arr1[i][j];
        }
    }
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            sumarr[i][j] = arr[i][j] - arr1[i][j];
        }
    }
    cout << "Matrix 1 =\n ";
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            cout << "\t" << arr[i][j];
        }
        cout << "\n";
    }
    cout << "Matrix 2 =\n ";
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            cout << "\t" << arr[i][j];
        }
        cout << "\n";
    }
    cout << "Sub of matrix are =\n ";
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            cout << "\t" << sumarr[i][j];
        }
        cout << "\n";
    }
}