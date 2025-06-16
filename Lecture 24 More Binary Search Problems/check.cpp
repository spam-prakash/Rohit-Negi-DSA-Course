#include <iostream>
#include<vector>
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
     int arr[]={5,1,3};
    // int arr[]={4,5,6};//4
    int size=sizeof(arr)/sizeof(arr[0]);
    int key=3;
    int ans=search(arr,size,key);
    cout<<ans;
}