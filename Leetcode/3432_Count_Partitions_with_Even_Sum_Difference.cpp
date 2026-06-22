
#include<iostream>
#include<vector>
using namespace std;

// Sum of elements of nums is lets say sum and let the sub-arrays be x and y... so... sum=x+y;
// If sum is even that means either both  x&y are even or are odd so x-y will always be even;
// If sum is odd that means either x is even and y is odd or y is even and x is odd tn both cases x-y will be odd;
// Whn sum is even then number of partationing with even diff will be n-1. When sum is odd then then there won't be any even diff partationing; 


int main(){
    vector<int> nums={10,10,3,7,6};
    int sum;

    for(int x:nums){
        sum+=x;
    }

    sum%2==0 ? cout<<nums.size()-1 : cout<<0; 
}