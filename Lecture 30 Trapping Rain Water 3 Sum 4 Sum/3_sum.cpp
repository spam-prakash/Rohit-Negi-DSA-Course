
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> arr={1,4,6,8,10,45};
    int size=arr.size();
    int x=13;

    for(int i=0;i<size-2;i++){
        int find=x-arr[i];
        int start=i+1,end=size-1;
        while(start<end){
            if(arr[start]+arr[end]==find){
                cout<<1;
            }else if(arr[start]+arr[end]>find){
                end--;
            }else if(arr[start]+arr[end]<find){
                start++;
            }
        }

    }
    // cout<<0;
}