
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>nums={10,5,2,6};
    int k=100;
    int count=0;
    int n=nums.size();

    for(int i=0;i<n;i++){
        int product=1;
        for(int j=i;j<n;j++){
            product*=nums[j];
            if(product<k) count++;
            else break;
        }
    }
    cout<<count;
}