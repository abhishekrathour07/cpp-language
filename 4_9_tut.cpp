//   write program to convert cel into far through function .
#include <iostream>
using namespace std;
float far(float celcius)
{
    float result = (celcius * 9 / 5) + 32;
    return result;
}
int main()
{
    int cel;
    cout << "Enter the value of celcius ";
    cin >> cel;
    cout << "Value of farenheit in celcius is " << far(cel) << endl;
    return 0;
}