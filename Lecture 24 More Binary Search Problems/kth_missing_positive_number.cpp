
#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,3,4};
    int size=sizeof(arr)/sizeof(arr[0]);
    int k=2;
    
    int start=0,end=size-1,mid,ans=size;
    
    while(start<=end){
        mid=start+(end-start)/2;

        if(arr[mid]-mid-1>=k){
            ans=mid;
            end=mid-1;
        }else{
            start=mid+1;    
        }
    }
    cout<<ans+k;
}