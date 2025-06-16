
#include <iostream>
using namespace std;

int main(){
    int arr[]={2,4,5,6,8,10,13,6,5,3,1};
    int size=sizeof(arr)/sizeof(arr[0]);

    int start=0,end=size-1,mid,ans;

    while(start<=end){
        mid=start+(end-start)/2;

        if(arr[mid]>arr[mid-1]&&arr[mid]>arr[mid+1]){
            ans=mid;
            break;
        }else if(arr[mid]>arr[mid-1]){
            start=mid+1;
        }else if(arr[mid]>arr[mid+1]){
            end=mid-1;
        }
    }
    cout<<mid;
}