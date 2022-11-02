//  concept of const.
#include<iostream>

using namespace std;

int main(){
    const int a =6;
    cout<<"Value of a is : "<<a<<endl;
    // a=7; --> its give error bcz we assign a as const.
    cout<<"Value of a :" << a<<endl;
}