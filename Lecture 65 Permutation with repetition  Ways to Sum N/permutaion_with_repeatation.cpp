
    #include<iostream>
    #include<vector>
    #include<algorithm>
    using namespace std;

    void permutation(vector<int>&arr,vector<vector<int>> &ans,int index){
        if(index==arr.size()){
            ans.push_back(arr);
            return;
        }
        vector<bool> use(21,false); 
        for(int i=index;i<arr.size();i++){
            if(use[arr[i]+10]==0){
                swap(arr[i],arr[index]);
                permutation(arr,ans,index+1);
                swap(arr[i],arr[index]);
                use[arr[i]+10]=1;
            }
        }
    }

    int main(){
        vector<int> arr={0,0,1,0,9};
        vector<vector<int>> ans;
        permutation(arr,ans,0);

        for(int i=0;i<ans.size();i++){
            cout<<i+1<<"{ ";
            for(int j=0;j<ans[i].size();j++){
                cout<<ans[i][j]<<" ";
            }
            cout<<"}\n";
        }
    }