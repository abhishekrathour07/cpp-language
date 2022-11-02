// Introduce what is del and new in c++ classes .
#include <iostream>
using namespace std;

int main()
{
    int a = 4;
    int *ptr = &a;
    cout << "The value of a is " << *ptr << endl;
    int *p = new int(45);
    cout << "The value at address p is " << *p << endl;
    int *array = new int[4];
    array[0] = 24;
     array[1] = 25;
      //array[2] = 26;we can write like this also
      *(array +2) = 34;
       array[3] = 27;
    //    delete array;
       cout <<"The value of array[0] is "<<array[0]<<endl;
       cout <<"The value of array[1] is "<<array[1]<<endl;
       cout <<"The value of array[2] is "<<array[2]<<endl;
       cout <<"The value of array[3] is "<<array[3]<<endl;

}