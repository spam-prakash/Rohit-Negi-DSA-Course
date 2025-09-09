
#include<iostream>
#include<vector>
using namespace std;


// Time Complexity: O(nlogn)
// Space Complexity: O(n)



void merge(int arr[],int start,int mid,int end){
    vector<int>temp(end-start+1);
    int left=start;
    int right=mid+1;
    int index=0;
    while(left<=mid&&right <=end){
        if(arr[left]<=arr[right]){
            temp[index]=arr[left];
            index++,left++;
        }else{
            temp[index]=arr[right];
            index++,right++;
        }
    }


    // if element is left in left arr
    while(left<=mid){
        temp[index]=arr[left];
        index++,left++;
    }

    // if element is left in right arr
    while(right<=end){
        temp[index]=arr[right];
        index++,right++;
    }

    //Put sorted value in original arr
    index=0;
    while(start<=end){
        arr[start]=temp[index];
        start++,index++;
    }
}

void ms(int arr[],int start,int end){
    if(start==end) return;
    int mid=start+(end-start)/2;
    ms(arr,start,mid);      //left part
    ms(arr,mid+1,end);      //right part
    merge(arr,start,mid,end);

}

int main(){
    int arr[]={6,3,5,2,2,8,1,3,2,9};
    int start=0,end=sizeof(arr)/sizeof(arr[0])-1;

    // int mid=start+(end-start)/2;
    ms(arr,start,end);
    for(int i=0;i<=end;i++){
        cout<<arr[i]<<" ";
    }
}