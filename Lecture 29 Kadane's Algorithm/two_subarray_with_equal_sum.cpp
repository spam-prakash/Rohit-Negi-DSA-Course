
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int arr[]={3,4,-2,5,8,20,-10,8};
    int size=sizeof(arr)/sizeof(arr[0]);

    int total_sum=0;
    for(int i=0;i<size;i++){
        total_sum+=arr[i];
    }

    int prefix_sum=0,temp_sum=0;
    for(int i=0;i<size-1;i++){
        prefix_sum+=arr[i];
        temp_sum=total_sum-prefix_sum;
        if(prefix_sum==temp_sum){
            cout<<"YES";
            break;
        }
    }
    
}