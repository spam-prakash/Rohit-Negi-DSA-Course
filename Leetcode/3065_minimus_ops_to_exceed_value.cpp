
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>nums={1,1,2,4,9};
    int count=0;
    int k=10;

    for(int x:nums){
        if(x<k)count++;
    }
    cout<<count;
}