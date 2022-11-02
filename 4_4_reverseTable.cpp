// Write a program of reverse multiplication .
#include <iostream>
using namespace std;

int main()
{
    int i, num;
    cout << "Enter the number ";
    cin >> num;
    // do{
    //     cout<<num<<" X "<<i<< " is "<<num*i<<endl;
    //     i--;
    // }while(i>=1);
    // while(i>=1){
    // cout<<num<<" X "<<i<< " is "<<num*i<<endl;
    // i--;
    // }
    for (i = 10; i >= 1; i--)
    {
        cout << num << " X " << i << " is " << num * i << endl;
      
    }
}