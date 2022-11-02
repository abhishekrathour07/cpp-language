// Find  the area of the circle and cylinder as well as circumfrance .
#include<iostream>
using namespace std;

int main(){
    int area,circum,r;
    float pie =3.14;
    cout<<"Enter the radius of th cylinder"<<endl;
    cin>>r;
    area = pie*r*r;
    circum = 2 *pie *r;
    cout<<"area of the circle is " << area<<endl;
    cout <<"Circumfrance of the circle is "<< circum<<endl;
    return 0;

}