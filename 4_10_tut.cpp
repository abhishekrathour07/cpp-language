// Write a program to find the force of attraction of mass .
#include <iostream>
using namespace std;
float force(double  mass)
{
    return 9.8 * mass;
}
int main()
{
    float mass;
    cout << "Enter the mass ";
    cin >> mass;
    cout << "FOrce of attraction on the earth is :- " << force(mass);

    return 0;
}