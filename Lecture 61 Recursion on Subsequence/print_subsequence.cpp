
#include<iostream>
#include<vector>
using namespace std;

void subseq(int arr[],int index,int end,vector<vector<int>>&ans,vector<int>temp){
    if(index==end){
        ans.push_back(temp);
        return;
    }
    subseq(arr,index+1,end,ans,temp);
    temp.push_back(arr[index]);
    subseq(arr,index+1,end,ans,temp);
}


int main(){
    int arr[]={1,2,3};
    vector<vector<int>>ans;
    vector<int>temp;
    int n=sizeof(arr)/sizeof(arr[0]);
    subseq(arr,0,n,ans,temp);

    for(const auto& seq : ans) {
        cout<<'{';
        for(int num : seq) {
            cout << num << " ";
        }
        cout<<'}';
        cout << endl;
    }
}       
