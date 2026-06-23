
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>nums={7,4,2};
    int k=2;
    vector<int>ans;
    int n=nums.size();
    int max=nums[0];
   
    for(int i=0;i<k;i++){
        if(nums[i]>max) max=nums[i];
    }
    ans.push_back(max);

    for(int i=k;i<n;i++){
        int outgoing=nums[i-k];
        if(nums[i]>max){
            max=nums[i];
        }else if(outgoing==max){
            max=nums[i-k+1];
            for(int j=i-k+1;j<=i;j++){
                if(nums[j]>max) max=nums[j];
            }
        }
        ans.push_back(max);
    }
    
    
    for(int i:ans){
        cout<<i<<" ";
    }
}