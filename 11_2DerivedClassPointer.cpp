#include<iostream>
using namespace std;
class baseclass{
    public:
    int var_base;
    void display(){
        cout<<"displaying base class variables"<<var_base<<endl;
    }
};
class derivedclass:public baseclass{
public:
int var_derived;
void display(){
    cout<<"Displaying base class variables "<<var_base<<endl;
    cout<<"Displaying base class variables "<<var_derived<<endl;
}
};

int main(){

baseclass *pointer_base;
baseclass obj_base;
derivedclass obj_derived;
pointer_base =&obj_derived;
pointer_base -> var_base =43;
pointer_base->display();
derivedclass  *pointer_derived;
pointer_derived =&obj_derived;
pointer_derived -> var_derived =98;
pointer_derived->display();

return 0;
}