
#include<iostream>
using namespace std;

int main(){
    int arr[]={2,3,4,5,6}; //Expected: 6,2,3,4,5
    int size=sizeof(arr)/sizeof(arr[0]);
    int temp=arr[size-1];

    for(int i=size-2;i>=0;i--){
        arr[i+1]=arr[i];
    }
    arr[0]=temp;

    for(int i=0;i<size;i++){
        cout<<arr[i]<< " ";
    }


}