#include<iostream>
using namespace std;

class test{
int a,b;
public:
test(int i,int j):a(i),b(i+j){
cout<<"inialize list of constructor called "<<endl;
cout<<"The value of a is "<<a<<endl;
cout<<"The value of b is "<<b<<endl;

}
};
int main(){
    test a(2,9);
test(8,8);
return 0;
}