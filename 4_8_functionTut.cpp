#include <iostream>
using namespace std;

float avg(int a, int b, int c)
{
    return float(a + b + c) / 3;
}
int main()
{
    int x, y, z;
    cout << "Enter the value of x ,y,z ";
    cin >> x >> y >> z;
    cout << "Average of the number is " << avg(x, y, z) << endl;

    return 0;
}