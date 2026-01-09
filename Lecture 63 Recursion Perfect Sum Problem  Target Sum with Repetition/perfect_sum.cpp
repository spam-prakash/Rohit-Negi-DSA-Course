
#include<iostream>
using namespace std;

// void perfect_sum(int arr[],int index,int n, int sum,int &ans,int target){
//     if(index==n) {
//         if(sum==target)ans++;
//         return;
//     }
//     perfect_sum(arr,index+1,n,sum,ans,target);
//     perfect_sum(arr,index+1,n,sum+arr[index],ans,target);
// }

// int main(){
//     int arr[5]={2,5,1,6,3};
//     int target=8,ans=0;
//     perfect_sum(arr,0,5,0,ans,target);
//     cout<<ans;
// }

int perfect_sum(int arr[],int index,int sum,int n){

    if(index==n){
        return sum==0;
    }

    return perfect_sum(arr,index+1,sum,n)+ perfect_sum(arr,index+1,sum-arr[index],n);
}

int main(){
    int arr[2]={1,0};
    int sum=1;
    cout<<perfect_sum(arr,0,sum,2);
}