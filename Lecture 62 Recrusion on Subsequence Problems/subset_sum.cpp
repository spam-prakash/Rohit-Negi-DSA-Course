
#include<iostream>
#include<vector>
using namespace std;

void subset_sum(int arr[],int index,int n,vector<int> &ans,int sum){
    if(index==n){
       ans.push_back(sum);
       return;
    }

    // Exclude current element
    subset_sum(arr,index+1,n,ans,sum);
    
    // Include current element 
    subset_sum(arr,index+1,n,ans,sum+arr[index]);
}

int main(){
    int arr[3]={2,4,3};
    vector<int> ans;
    int sum=0;
    vector<int> temp;
    subset_sum(arr,0,3,ans,sum);

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}