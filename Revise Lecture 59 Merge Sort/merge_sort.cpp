
#include<iostream>
#include<vector>
using namespace std;

void merge(int arr[],int start,int end,int mid){
    vector<int>temp(end-start+1);
    int leftIndex=start,rightIndex=mid+1,index=0;

    while(leftIndex<=mid && rightIndex<=end){
        if(arr[leftIndex]<=arr[rightIndex]){
            temp[index]=arr[leftIndex];
            leftIndex++;
            index++;
        }else{
            temp[index]=arr[rightIndex];
            rightIndex++;
            index++;
        }
    }

    // If left array still have elements
    while(leftIndex<=mid){
        temp[index]=arr[leftIndex];
        index++;
        leftIndex++;
    }

    // If right array still have elements
    while(rightIndex<=end){
        temp[index]=arr[rightIndex];
        index++;
        rightIndex++;
    }

    index=0;
    while(start<=end){
        arr[start]=temp[index];
        start++,index++;
    }
}

void ms(int arr[],int start,int end){
    if(start==end)return;
    int mid=start+(end-start)/2;
    ms(arr,start,mid);   //Left Part
    ms(arr,mid+1,end);     // Right Part
    merge(arr,start,end,mid);
}

int main(){
    int arr[8]={2,1,0,78,34,6,12,44};
    ms(arr,0,7);

    for(int i=0;i<8;i++){
        cout<<arr[i]<<" ";
    }
}