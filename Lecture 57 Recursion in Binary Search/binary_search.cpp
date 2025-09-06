
#include<iostream>
using namespace std;

int bs(int arr[],int x,int start,int end){

    if(start>end) return -1;

    int mid=start+(end-start)/2;

    if(arr[mid]==x){
        return mid;
    }else if(arr[mid]>x){
        return bs(arr,x,start,end=mid-1);
    }else if(arr[mid]<x){
        return bs(arr,x,start=mid+1,end);
    }
    
}

int main(){
    int arr[]={11,22,33,44,55};
    int x=22;
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<bs(arr,x,0,size);
}