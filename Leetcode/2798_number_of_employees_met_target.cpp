
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>nums={0,1,2,3,4};
    int target=2;
    int count=0;

    for(int x:nums){
        if(x>=target)count++;
    }
    cout<<count;
}