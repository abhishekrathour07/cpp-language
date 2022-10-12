#include <iostream>
using namespace std;
float force(float mass)
{
    return 9.8 * mass;
}
int main()
{
    int mass;
    cout << "Enter the mass ";
    cin >> mass;
    cout << "FOrce of attraction on the earth " << force(mass);

    return 0;
}