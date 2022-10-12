#include <iostream>
using namespace std;

int main()
{
    int i, num, t1 = 0, t2 = 1, t3 = t1 + t2;
    cout << " Enter the number " << endl;
    cin >> num;
    cout << "Fibonacci series of " << num << " are " << t1 << "," << t2 << ",";
    for (i = 3; i <= num; i++)
    {
        cout << t3 << ",";
        t1 = t2;
        t2 = t3;
        t3 = t1 + t2;
    }
    return 0;
}