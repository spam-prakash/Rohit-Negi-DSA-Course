
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector <int> v={2,7,11,15,27};
    int size=v.size();

    int start=0,end=size-1;
    int sum=9;

    while(start<end){
        if(v[start]+v[end]==sum){
            cout<<v[start]<<" "<<v[end]<<" ";
            break;
        }else if(v[start]+v[end]<sum){
            start++;
        }
        else{
            end--;
        }
    }
}