#include<iostream>
using namespace std;
 class Myclass{
    public :
    int add(int a, int b){
        return a +b;
    }

    int substract(int a,int b){
        return a - b;
    }
};


int main(){
    int myclass = new MyClass();
    int myNum = myclass.add(2,5);
    cout<<myNum;

    return 0;
}