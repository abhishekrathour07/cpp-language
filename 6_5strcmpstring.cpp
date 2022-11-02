// concept of strcmp.

#include<iostream>
#include<string.h>
using namespace std;

int main(){
    char str1[30] = "akhilesh";
    char str[20] = "abhishek"; //comparison between two string
   int result = strcmp(str1,str);
    cout<<result;

}