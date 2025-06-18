
#include <iostream>
using namespace std;

int sort(int arr[],int size){

}

int main(){
    int arr[]={1,2,4,8,9};
    int size=sizeof(arr)/sizeof(arr[0]);
    int k=3;
    int start=arr[0],end=arr[size-1]-arr[0],ans=-1;

    while(start<=end){
        int mid=start+(end-start)/2;
        int count=1,pos=arr[0];
        for(int i=1;i<size;i++){
            if(pos+mid<=arr[i]){
                count+=1;
            }
            pos=arr[i];
        }
    }

}