#include <iostream>
using namespace std;
int main() {
   int i;
   int x;
   int arr[]={1,2,3,4,5};
   int n=sizeof(arr)/sizeof(arr[0]);
   x=arr[n-1];
   for(i=n-1;i>0;i--)
   {
       arr[i]=arr[i-2]; 
   }
          arr[0]=x;
   for(i=0;i<n;i++)
   { 
   cout<<arr[i]<<endl;
   }
    return 0;
}