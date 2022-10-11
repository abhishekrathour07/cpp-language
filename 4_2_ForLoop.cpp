#include <iostream>
using namespace std;

int main()
{
	int i, n, sum = 0;
	float avg;
	cout << "Input the 10 numbers : \n";
	for (i = 1; i <= 10; i++)
	{
		cout << "Number " << i << ":-";

		cin >> n;
		sum += n;
	}
	avg = sum / 10.0;
	cout << "The sum of 10 no is : " << sum << endl
		 << "The Average is : " << avg << endl;
	return 0;
}