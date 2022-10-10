#include <iostream>
using namespace std;

int main()
{
    int income, tax = 0;
    cout << "Enter your income ";
    cin >> income;
    if (income >= 250000 && income <= 500000)
    {
        tax = tax + 0.05 * (income - 250000);
    }
    else if (income >= 500000 && income <= 1000000)
    {
        tax = tax + 0.2 * (income - 500000);
    }
    else if (income >= 1000000)
    {
        tax = tax + 0.3 * (income - 1000000);
    }
    cout << "Tax should be paid :- " << tax;
    return 0;
}