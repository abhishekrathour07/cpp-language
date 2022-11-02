// Ambigity concept in c++.
#include<iostream>
using namespace std;
 class base1{
    public:
    void print(){
        cout<<"How are you acharyan"<<endl;
    }
 };
 class base2{
    public:
    void print(){
        cout<<"kaise ho acharyan"<<endl;
    }
 };
 class derived: public base1 ,public base2{
    public:
    void print(){
        base2::print();
    }
  
 };

 int main(){

base1 b1;
b1.print();
base2 b2;
b2.print();

derived d1;
d1.print();
    return 0;
 }
