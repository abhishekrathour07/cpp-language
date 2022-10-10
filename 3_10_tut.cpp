#include<iostream>
using namespace std;

int main(){
    char charcter;
 cout<<"Enter the charcter ";
 cin>>charcter;

 if (charcter>='a' && charcter <= 'z'){
    cout << "it is lowercase ";
    }
    else if ( charcter >= 'A' && charcter <= 'Z')
    {
            cout << "It is uppercase ";
    }
    else {
        cout << "it is special charcter or a number";
        
    }
 }
