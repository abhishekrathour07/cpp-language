#include<iostream>
using namespace std;

int main(){
    int i=0,num,table;
    cout<<"Enter the number to find table"<<endl;
    cin>>num;
    while(i<10){
        i++;
        table = num *i;
    cout << num<<" x "<<i<<" is "<<table<<endl;
    }
    return 0;
}