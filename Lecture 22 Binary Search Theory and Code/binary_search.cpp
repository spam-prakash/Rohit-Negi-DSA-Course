#include<iostream>
using namespace std;

int search(int arr[],int size,int key){
    int start=0,end=size-1,mid;
    while(start<=end){
        mid=start+(end-start)/2;
        if(arr[mid]==key){
            return mid;
        }else if(arr[mid]>key){
            end=mid-1;
        }else if(arr[mid]<key){
            start=mid+1;
        }
    }
    return -1;
}

int main(){
    int arr[]={7,10,12,21,33,47};
    int size=sizeof(arr)/sizeof(arr[0]);
    int key;
    cout<<"ENTER TARGET: ";
    cin>>key;
    
    cout<<search(arr,size,key);
}