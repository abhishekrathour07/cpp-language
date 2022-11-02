// Write a program to find the multiplication table of given number.
#include <iostream>
using namespace std;

int main()
{

    int num, i = 1, table;
    cout << "Enter the number ";
    cin >> num;
    do
    {
        cout << num << " X " << i << " is " << num * i << endl;
        i++;
    } while (i <= 10);

    return 0;
}
