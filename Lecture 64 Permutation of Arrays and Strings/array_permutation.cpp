
#include<iostream>
#include<vector>
using namespace std;

void permutation(int arr[],vector<vector<int>> &ans, vector<int>&temp,vector<bool>&visited){
    if(temp.size()==visited.size()){
        ans.push_back(temp);
        return;
    }

    for(int i=0;i<visited.size();i++){
        if(visited[i]==0){
            visited[i]=1;
            temp.push_back(arr[i]);

            permutation(arr,ans,temp,visited);
            visited[i]=0;
            temp.pop_back();
        }
    }
}

int main(){
    int arr[3]={1,2,3};
    vector<vector<int>> ans;
    vector<int> temp;
    vector<bool>visited(3, false);
    permutation(arr,ans,temp,visited);
    for(int i=0;i<ans.size();i++){
        cout<<"{ ";
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<< " ";
        }
        cout<<"}"<<endl;
    }
}