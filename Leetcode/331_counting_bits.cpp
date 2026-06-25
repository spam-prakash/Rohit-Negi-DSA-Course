
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n=5;
    vector<int> ans(n);

    for(int i=0;i<n;i++){
        int count=0;
        int num=i;
        while(num){
            count+=num&1;
            num>>=1;
        }
        ans[i]=count;
    }

    for(int x:ans){
        cout<<x<<" ";
    }
}