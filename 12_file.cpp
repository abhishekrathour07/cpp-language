// Write aprogram in file I/O to read and write th e files 
#include<iostream>
#include<fstream>

using namespace std;

int main(){
string st1 ="Hello abhishek singh rathour ";
string st2;
ofstream likhde("sample12a.txt");
likhde<<st1;
ifstream dikhade("sample12b.txt");
dikhade>>st2;
cout<<st2;
getline(dikhade,st2);
getline(dikhade,st2);
getline(dikhade,st2);
cout<<st2;
cout<<st2;

    return 0;
}