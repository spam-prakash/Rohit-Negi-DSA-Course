
#include <iostream>
using namespace std;

int main(){
    int arr[]={3,2,2,4,1,4};
    int size=sizeof(arr)/sizeof(arr[0]);
    int k=3;
    int start=0,end=0,ans=-1;

    for(int i=0;i<size;i++){
        end+=arr[i];
        start=max(start,arr[i]);
    }

    while(start<=end){
        int mid=start+(end-start)/2;
        int pages=0,count=1;
        for(int i=0;i<size;i++){
            pages+=arr[i];
            if(pages>mid){
                count++;
                pages=arr[i];
            }
        }

        if(count<=k){
            ans=mid;
            end=mid-1;
        }else
            start=mid+1;
        
    }

    cout<<ans;
        

}