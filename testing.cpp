#include<iostream>
using namespace std;
 int main(){
int a[] = {1,2,3,4,5},sum =0;
for (int i=0;i<5;i++){
    if (i%3 == 0){
        sum = sum + a[i];
    }
}
cout<<sum<<endl; 
    return 0;
}