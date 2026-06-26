#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>nums={1,2,3,2,3};
    int candidate=nums[0];
    int count=1;
    int n=nums.size();

    for(int i=1;i<n;i++){
        if(nums[i]==candidate){
            count++;
        }else{
            count--;
        }
        if(count==0){
            candidate=nums[i];
            count=1;
        }
    }
    count=0;
    for(int i=0;i<n;i++){
        if(nums[i]==candidate)count++;
    }

    if(count>=n/2){
        cout<<candidate;
        return 0;
    }else{
        cout<<-1;
        return 0;
    }
    // cout<<candidate;
}