
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> nums={0,0,1,1,1,2,2,3,3,4};
    int n=nums.size();

    int i=0;
    for(int j=1;j<n;j++){
        if(nums[i]==nums[j]){
            continue;
        }else{
            i++;
            nums[i]=nums[j];
        }
    }

    for(int k=0;k<n-i-1;k++){
        nums.pop_back();
    }
    cout<<i;
    for(int x:nums){
        cout<<x<<" ";
    }
}