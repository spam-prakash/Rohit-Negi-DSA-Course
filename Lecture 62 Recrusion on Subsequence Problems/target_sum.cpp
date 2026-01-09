
#include<iostream>
#include<vector>
using namespace std;

bool find(int arr[],int index,int n, int sum,int target){

    if(index==n){
        return sum==target;
    }
    
    return find(arr,index+1,n,sum,target)|| find(arr,index+1,n,sum+=arr[index],target);
}

int main(){
    int arr[4]={1,6,4,5};
    int sum=0, target=19;
    cout<<find(arr,0,4,sum,target);
}