#include<iostream>
using namespace std;
class baseclass{
    public:
    int var_base =1;
    // we use virtual here to print the display of derived class
     virtual void display(){
        cout<<"displaying base class variables"<<var_base<<endl;
    }
};
class derivedclass:public baseclass{
public:
int var_derived =2;
void display(){
    cout<<"Displaying base class variables "<<var_base<<endl;
    cout<<"Displaying base class variables "<<var_derived<<endl;
}
};
int main(){
baseclass *base_ptr;
baseclass obj_base;
derivedclass obj_derived;
base_ptr =&obj_derived;
base_ptr->display();

    return 0;
}