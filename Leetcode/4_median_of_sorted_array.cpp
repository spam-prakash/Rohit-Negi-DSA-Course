
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>nums1={1};
    vector<int>nums2={2,3,4};
    int m=nums1.size();
    int n=nums2.size();
    int size=m+n;
    int target=size/2;
    int prev=0,curr=0;
    int i=0,j=0;

    for(int k=0;k<=target;k++){
        prev=curr;

        if(i<m &&(j>=n || nums1[i]<=nums2[j])){
            curr=nums1[i++];
        }else{
            curr=nums2[j++];
        }
    }
    // cout<<prev<<curr;
    size%2==0 ? cout<<(prev+curr)/2.0 : cout<<curr;
    // cout<<i<<j;
}