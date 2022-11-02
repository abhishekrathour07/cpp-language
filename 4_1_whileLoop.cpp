// Write a program to find the sum of the natural  number .
#include<iostream>
using namespace std;

int main(){
    int num ,i=1,sum=0;
    cout<<"Enter the size of natural num."<<endl;
    cin>>num;
    while(i<=num)
    {
        cout<<i<<endl;
        sum = sum + i;
        i++;

    }
    cout << "sum of the natural number are :-"<<sum<<endl;
    return 0;
}
