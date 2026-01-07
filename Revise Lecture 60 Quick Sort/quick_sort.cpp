#include<iostream>
#include<vector>
using namespace std;

int partition(int arr[],int start,int end){
    int pos=start;
    for(int i=start;i<end;i++){
        if(arr[i]<=arr[end]){
            swap(arr[i],arr[pos]);
            pos++;
        }
    }
    return pos-1;
}

void quick_sort(int arr[],int start,int end){
    if(start>=end) return;
    int pivot=partition(arr,start,end);
    quick_sort(arr,start,pivot-1);
    quick_sort(arr,pivot+1,end);
}


int main(){
    int arr[9]={53,43,3,56,43,67,78,23,7};
    quick_sort(arr,0,8);
    for(int i=0;i<9;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}