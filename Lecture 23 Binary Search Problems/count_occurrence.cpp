
#include<iostream>
using namespace std;

int first_position(int arr[],int size,int key){
    int start=0,end=size-1,mid,ans=0;

    while(start<=end){
        mid=start+(end-start)/2;

        if(arr[mid]==key){
            ans=mid;
            end=mid-1;
        }else if(arr[mid]>key){
            end=mid-1;
        }else if(arr[mid]<key){
            start=mid+1;
        }
    }
    return ans;
}

int last_position(int arr[],int size,int key){
    int start=0,end=size-1,mid,ans=0;

    while(start<=end){
        mid=start+(end-start)/2;

        if(arr[mid]==key){
            ans=mid;
            start=mid+1;
        }else if(arr[mid]>key){
            end=mid-1;
        }else if(arr[mid]<key){
            start=mid+1;
        }
    }
    return ans;
}

int main(){
    int arr[]={1,2,2,2,3,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    int key=2;

    int first=first_position(arr,size,key);
    int last=last_position(arr,size,key);
    
    cout<<last-first+1;
}