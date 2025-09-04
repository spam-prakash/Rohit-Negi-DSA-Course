
#include<iostream>
using namespace std;

int sum(int arr[],int n){
    if (n == 0) return 0;
    int ans = arr[n-1] + sum(arr, n-1);
    return ans;
}

int main(){
    int arr[]={11,22,33,44,55};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<sum(arr,n);
}