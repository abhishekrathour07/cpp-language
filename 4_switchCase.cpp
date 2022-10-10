#include <iostream>
using namespace std;

int main()
{
     int a, b, c, d;
     cout << "Enter the value of a and ";
     cin >> a >> b;
     cout << "Enter your choice \n 1. add\n 2. sub\n 3. multiply\n 4. remainder " << endl;
     cin >> d;
     switch (d)
     {
     case 1:
          c = a + b;
          cout << "add is " << c;
          break;
     case 2:
          c = a - b;
          cout << "subtract is " << c;
          break;
     case 3:
          c = a * b;
          cout << "muntiply is " << c;
          break;
     case 4:
          c = a % b;
          cout << "Remainder is " << c;
          break;
     }
     return 0;
}