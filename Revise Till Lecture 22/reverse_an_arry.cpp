
#include<iostream>
using namespace std;

int main(){
    int arr[]={64,5,45,4,4,5454,5,4,6544,99,459};
    int size=sizeof(arr)/sizeof(arr[0]);
    int *newArr=new int[size];
    
    int i=size-1,j=0;
    while(i>=0){
        newArr[j]=arr[i];
        j++;
        i--;
    }

    for(int i=0;i<size;i++){
        cout<<newArr[i]<<" ";
    }
}