
#include<iostream>
using namespace std;

int sum(int arr[],int index,int n,int target){
   if(target==0) return 1;
   if(index==n || target<0) return 0;

    return sum(arr,index+1,n,target)+sum(arr,index,n,target-arr[index]);
}

int main(){
    int arr[4]={2,3,4,5};
    cout<<sum(arr,0,4,10);
}