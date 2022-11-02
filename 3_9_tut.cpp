// Write a program to find the leap year.
#include<iostream>
using namespace std;

int main(){
    int year;
    cout << "Enter the year you want to find leap year or not ";
    cin>> year;
    if ( year%400 ==0 || year%100 !=0 && year % 4 == 0)
    {
        cout <<"*** LEAP YEAR ***";

    }
    else {
        cout << "*** NOT A LEAP YEAR ***";
    }
}