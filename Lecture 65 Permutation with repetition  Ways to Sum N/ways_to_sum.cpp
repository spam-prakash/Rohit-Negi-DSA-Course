
#include<iostream>
#include<vector>
using namespace std;

int sum(vector<int> &arr,int target){
    if(target==0) return 1;
    if(target<0) return 0;
    int ans=0;
    for(int i=0;i<arr.size();i++){
        ans+=sum(arr,target-arr[i]);
    }
    return ans;
    
}

int main(){
    vector<int> arr={1,5,6};
    cout<<sum(arr,7);
}