
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int arr[]={1,4,7,-3,9};
    int size=sizeof(arr)/sizeof(arr[0]);

    vector <int> suffix_sum (size);

    suffix_sum[size-1]=arr[size-1];

    for(int i=size-2;i>=0;i--){
        suffix_sum[i]=suffix_sum[i+1]+arr[i];
    }

    for(int i=0;i<size;i++){
        cout<<suffix_sum[i]<<" ";
    }
}