// Write a program to convert celcius int farenheit. 
#include<iostream>
using namespace std;

int main (){
    double far ,cel;
    cout<<"Enter the celcius "<< endl;
    cin>>cel;
    far =(cel*9/5)+32;
    cout << "The value of celcius into farenheit is "<<far<<endl;

    return 0;
}
