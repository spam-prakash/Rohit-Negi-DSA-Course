
#include<iostream>
using namespace std;

int main(){
   int l=3,m=2,n=3;
   int ***ptr=new int **[l];
   for(int i=0;i<l;i++){
    ptr[i]=new int *[m];
    for(int j=0;j<m;j++){
        ptr[i][j]=new int [n];
    }
   }

   for(int i=0;i<l;i++){
    for(int j=0;j<m;j++){
        for(int k=0;k<n;k++){
            ptr[i][j][k]=i+j+k;
        }
    }
   }
   for(int i=0;i<l;i++){
    for(int j=0;j<m;j++){
        for(int k=0;k<n;k++){
            cout<<ptr[i][j][k]<<" ";
        }
        cout<<endl;
    }
   }
    return 0;
}