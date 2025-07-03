
#include <iostream>
#include<vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> arr= {1, 5, 1, 0, 6, 0};
    sort(arr.begin(),arr.end());
    int x=7;
    int size=arr.size();

    int first=arr[0],last=arr[size-1];

    for(int i=0;i<size-3;i++){
        for(int j=i+1;j<size-2;j++){
            int find=x-(arr[i]+arr[j]);
            int start=j+1,end=size-1;

            while(start<end){
                if(arr[start]+arr[end]==find){
                    cout<<1;
                    start++;
                    end--;
                    break;
                }else if(arr[start]+arr[end]<find){
                    start++;
                }else if(arr[start]+arr[end]>find){
                    end--;
                }
            }

        }
    }
    cout<<0;
}