// Overloading concept of class
#include<iostream>
using namespace std;

class complex {
    int a,b;
    public:
    complex(int x,int y){
        a=x;
        b=y;
    }
        complex(int x){
            a=x;
            b=0;
        }
};

int main(){
 complex ;

 return 0;
}