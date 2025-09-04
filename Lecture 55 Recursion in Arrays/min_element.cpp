
#include<climits>
#include<iostream>
using namespace std;

int minelement(int arr[],int n){
    if(n==1) return arr[0];
   return min(arr[n-1],minelement(arr,n-1));
}


int main(){
    int arr[]={2,4,10,6,34,67,2442,64};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<minelement(arr,n);
}