// Program to find sum of matrix 
#include<iostream>
using namespace std;

int main(){
    int i,j,a1[2][3],a2[2][3],sum[2][3];
    cout<<"Enter the  element in the matrix 1\n";
  
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            cin>>a1[i][j];
        }
    }
    cout<<"Enter the element in matrix 2\n";
      for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            cin>>a2[i][j];
        }
    }
    cout<<"Element in matrix 1 are \n";
      for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            cout << "\t"<<a1[i][j];
        }
        cout<< "\n";
    }
    cout<<"Element in matrix 2 are \n";
      for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            cout<<"\t"<<a2[i][j];
        }
        cout<<"\n";
    
    }
      for(i=0;i<2;i++){
        for(j=0;j<3;j++){
           sum[i][j] = a1[i][j] + a2[i][j];
        }
    }
    cout << "sum of the matrix 1 and 2 are \n";
      for(i=0;i<2;i++){
        for(j=0;j<3;j++){
          cout<<"\t"<<sum[i][j];
        }
        cout<<"\n";
    }
}