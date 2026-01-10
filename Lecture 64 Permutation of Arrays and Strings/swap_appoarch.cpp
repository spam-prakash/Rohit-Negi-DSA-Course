
#include<iostream>
#include<vector>
using namespace std;

void permutation(vector<int> &arr,vector<vector<int>> &ans,int index){
    if(index==arr.size()){
        ans.push_back(arr);
        return;
    }
    for(int i=index;i<arr.size();i++){
        swap(arr[i],arr[index]);
        permutation(arr,ans,index+1);
        swap(arr[i],arr[index]);
    }
}

int main(){
    vector<int> arr={1,2,3};
    vector<vector<int>> ans;

    permutation(arr,ans,0);

    for(int i=0;i<ans.size();i++){
        cout<<i+1<<"{ ";
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<< " ";
        }
        cout<<"}"<<endl;
    }
}