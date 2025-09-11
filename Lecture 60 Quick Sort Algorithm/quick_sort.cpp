
#include<iostream>
#include<algorithm>
using namespace std;

// Time Complexity: O(nlogn)
// Space Complexity: O(logn)

int partion(int arr[],int start,int end){
    int pos=start;
    for(int i=start;i<=end;i++){
        if(arr[i]<=arr[end]){
           swap(arr[i],arr[pos]);
           pos++;
        }
    }
    return pos-1;
}

void quick_sort(int arr[],int start,int end){

    if(start>=end) return;
    int pivot=partion(arr,start,end);

    quick_sort(arr,start,pivot-1);
    quick_sort(arr,pivot+1,end);
}

int main(){
    int arr[]={6,4,2,8,13,7,11,9,8,6};
    int start=0,end=sizeof(arr)/sizeof(arr[0])-1;
    quick_sort(arr,start,end);

    for(int i=0;i<=end;i++){
        cout<<arr[i]<<" ";
    }
}