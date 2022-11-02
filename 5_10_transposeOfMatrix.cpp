// Write a program to find the transpose of the matrix.
#include <iostream>
using namespace std;

int main()
{
    int arr[3][4], i, j, sum = 0;
    cout<<"enter the no. in Matrix\n";
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
           cin>> arr[i][j];
        }
    }
   cout<<"the Matrix is\n";
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            cout<<"\t"<< arr[i][j];
            sum = sum + arr[i][j];
        }
        cout<<"\n";
    }
    cout<<"transpose of matrix is\n";
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
           cout<<"\t"<< arr[j][i];
        }
       cout<<"\n";
    }
    cout<<" sum of these matrix are "<< sum;
    return 0;
}