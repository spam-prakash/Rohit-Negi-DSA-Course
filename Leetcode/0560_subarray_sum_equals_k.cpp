
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>nums={1,1,1};
    int k=2;
    int count=0;
    int n=nums.size();
    int sum=0;

    for(int i=0;i<n;i++){
        sum=0;
        for(int j=i;j<n;j++){
            sum+=nums[j];
            if(sum==k) count++;
        }
    }
    cout<<count;
}