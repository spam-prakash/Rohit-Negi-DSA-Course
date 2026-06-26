#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>nums={1,2,1,3,5,6,4};
    int mid;
    int left=0,right=nums.size()-1;

    while(left<=right){
        mid=left+(right-left)/2;
        if(nums[mid]>nums[mid+1]&&nums[mid]>nums[mid-1]) break;
        if(nums[mid]>nums[mid+1]){
            right=mid-1;
        }else{
            left=mid+1;
        }
    }
    cout<<mid;
}