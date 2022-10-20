#include<iostream>
using namespace std;
class complex ;
    class calculator{
        public:
         void sumrealcomplex(complex,complex);
//   friend int calculator ::  sumrealcomplex(complex,complex);
    };
  
  class complex{
    int a,b;
    public:
    void setnum(int n1 ,int n2){
        a=n1;
        b=n2;

    }
    void printnum(){
        cout <<"Your number is "<<a<<" + "<<b<<"i"<<endl;
    }
  };
  int calculator :: sumrealcomplex(complex o1, complex o2){
return ( o1.a +o2.a);
  }

  int main(){
    
  }
