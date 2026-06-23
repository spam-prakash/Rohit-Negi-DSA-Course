
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>nums={1,3,2,4};
    int n=nums.size();
    vector<int>ans(n,0);
    int ei=0,oi=n-1;
    
    for(int x:nums){
        if(x%2==0){
            ans[ei]=x;
            ei++;
        }else{
            ans[oi]=x;
            oi--;
        }
    }

    for(int x:ans){
        cout<<x<<" ";
    }
}