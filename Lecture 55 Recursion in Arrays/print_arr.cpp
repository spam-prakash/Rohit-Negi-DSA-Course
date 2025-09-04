#include <iostream>
using namespace std;

void print(int arr[],int n,int index=0){
    if(index==n) return;
    cout<<arr[index]<< " ";
    print(arr,n,index+1);
}

int main(){
    int arr[]={11,22,33,44,55};
    int n=sizeof(arr)/sizeof(arr[0]);
    print(arr,n);
}