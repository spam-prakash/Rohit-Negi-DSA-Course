
#include<iostream>
using namespace std;

int binarySearch(int arr[],int key,int start,int end){
    if(start>end) return -1;

    int mid=start+(end-start)/2;
    
    if(arr[mid]==key){
        return mid;
    }else if(arr[mid]>key){
        binarySearch(arr,key,start,mid-1);
    }else if(arr[mid]<key){
        binarySearch(arr,key,mid+1,end);
    }
}

int main(){
    int arr[5]={1,3,6,8,9};
    int start=0,end=sizeof(arr)/sizeof(arr[0]);
    int key=9;
    cout<<binarySearch(arr,key,start,end);
}