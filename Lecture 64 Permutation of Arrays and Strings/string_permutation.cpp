
#include<iostream>
#include<string>
#include<vector>
using namespace std;

void permutation(string &s,vector<string> &ans,int index){
    if(index==s.size()){
        ans.push_back(s);
        return;
    }
    
    for(int i=index;i<s.size();i++){
        swap(s[i],s[index]);
        permutation(s,ans,index+1);
        swap(s[i],s[index]);
    }
}

int main(){
    string s="abc";
    vector<string> ans;
    permutation(s,ans,0);

    for(int i=0;i<ans.size();i++){
        cout<<i+1<<"{"<<ans[i]<<"}"<<endl;
    }
}