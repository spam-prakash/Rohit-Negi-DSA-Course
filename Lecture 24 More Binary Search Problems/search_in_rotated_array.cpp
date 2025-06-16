
#include<iostream>
using namespace std;

int search(int arr[],int size,int key){
    int start=0,end=size-1,ans;

    while(start<=end){
        int mid=start+(end-start)/2;

        if(arr[mid]==key){
            return mid;
        }
        if(arr[mid]>=arr[start]){
            if(arr[mid]>key && arr[start]<=key){
                end=mid-1;
            }else {
                start=mid+1;
            }
        }
        else if(arr[mid]<arr[start]){
            if(arr[mid]<key && arr[end]>=key){
                start=mid+1;
            }else{
                end=mid-1; 
            }
        }
    }
    return -1;
}

int main(){
    int arr[]={4,5,6,7,0,1,2};
    // int arr[]={4,5,6};//4
    int size=sizeof(arr)/sizeof(arr[0]);
    int key;
    cout<<"ENTER TARGET: ";
    cin>>key;

    int ans=search(arr,size,key);
    cout<<ans;
}