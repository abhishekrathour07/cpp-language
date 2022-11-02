// c oncept of multilevel inheritance . 
#include <iostream>
using namespace std;
class student
{
    int Roll;

public:
    int set_Roll(int r)
    {
        Roll = r;
    }
    void get_Roll()
    {
        cout << "The roll number is " << Roll << endl;
    }
};

class exam : public student {
protected:
float maths ,science,english;
public:
int setmark(float m,float s,float e){
    maths =m ;
    science = s;
    english = e;
}
    void getmark(){
        cout<<"The marks obtained in math are "<<maths<<endl;
        cout<<"The marks obtained in math are "<<science<<endl;
        cout<<"The marks obtained in math are "<<english<<endl;
 
    }


};
class result : public exam{
 float percentage;
 public:
 void  getresult(){
     get_Roll();
    getmark();
    cout<<"Percentage is "<< (maths + science +english)/3<<"%"<<endl;
 }
};

int main()
{
 result abhishek;
 abhishek.set_Roll(026);
 abhishek.setmark(45,89,98);
 abhishek.getresult();
    return 0;
}