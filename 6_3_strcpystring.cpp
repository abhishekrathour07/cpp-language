// concept of strcpy.
#include<iostream>
#include<string.h>
using namespace std;

int main(){
char string1[] ="hellobrother"; //copy the value of one string to another
char string2[30];
strcpy(string2,string1);
cout<<string2;

    return 0;
}