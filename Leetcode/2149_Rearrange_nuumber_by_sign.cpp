
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>nums={3,1,-2,-5,2,-4};
    int n=nums.size();
    vector<int>ans(n);
    int pi=0,ni=1;

    for(int i=0;i<n;i++){
        if(nums[i]>0){
            ans[pi]=nums[i];
            pi+=2;
        }else{
            ans[ni]=nums[i];
            ni+=2;
        }
    }

    for(int x:ans){
        cout<<x<<" ";
    }
}