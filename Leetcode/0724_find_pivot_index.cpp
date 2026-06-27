
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>nums={1,7,3,6,5,6};
    int total=0,n=nums.size(),left_sum=0;
    for(int x:nums){
        total+=x;
    }

    for(int i=0;i<n;i++){
        left_sum+=nums[i];
        if(left_sum==total){
            cout<<i;
            break;
        }else{
            total-=nums[i];
        }
    }
}