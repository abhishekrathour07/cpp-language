// What is virtual base class .
#include <iostream>
using namespace std;

class Student
{
protected:
    int roll;

public:
    void set_roll(int a)
    {
        roll = a;
    }
    void get_roll(void)
    {
        cout << "Your roll number is " << roll << endl;
    }
};
class Marks : virtual public Student // Virtual base class have higher precendence .
{
protected:
    float math, eng;

public:
    void set_marks(int n1, int m2)
    {
        math = n1;
        eng = m2;
    }
    void get_mark(void)
    {
        cout << "Your marks in math are " << math << endl
             << "marks in eng are " << eng << endl;
    }
};
class Sport : virtual public Student
{
protected:
    int physical;

public:
    void set_physical(int p)
    {
        physical = p;
    }
    void get_physical(void)
    {
        cout << "marks obtained in physical is " << physical<<endl;
    }
};
class result : public Marks, public Sport
{
private:
    float total;

public:
    void display(void)
    {
        total = math + eng + physical;
        get_roll();
        get_mark();
        get_physical();

        cout<<"The total marks is "<<total<<endl;

    }
};
int main(){
    result abhi;
    abhi.set_roll(26);
    abhi.set_marks(89.8,98.9);
    abhi.set_physical(78);
    abhi.display();
}