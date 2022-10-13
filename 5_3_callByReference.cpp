#include<iostream>
using namespace std;

void swap(int &a,int &b){
     int exchange;
    exchange = a;
    a = b;
    b = exchange;
}
int main(){
    
    int a=5,b=7;
    swap(a,b);
    cout<<"Swaping value is a = "<<a<<endl;
    cout<<"swaping value of b = "<<b<<endl;
return 0;
}