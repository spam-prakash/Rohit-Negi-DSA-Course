
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>nums={4,2,5,7};
    int n=nums.size();
    vector<int>ans(n);
    int ei=0,oi=1;

    for(int x:nums){
        if(x%2==0){
            ans[ei]=x;
            ei+=2;
        }else{
            ans[oi]=x;
            oi+=2;
        }
    }

    for(int x: ans){
        cout<<x<<" ";
    }
}