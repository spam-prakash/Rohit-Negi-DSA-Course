
#include <iostream>
using namespace std;

int main(){
    int arr[]={2,3,5,7,8,0,1};
    int size= sizeof(arr)/sizeof(arr[0]);

    int start=0,end=size-1,mid,ans=arr[0];

    while(start<=end){
        mid=start+(end-start)/2;

        if(arr[mid]>=arr[0]){
            start=mid+1;
        }else{
            ans=arr[mid];
            end=mid-1;
        }
    }
    cout<<ans;
}