
#include<iostream>
#include<vector>
#include<string>
using namespace std;

void generate(vector<string> &ans,int n,int l,int r,string &temp){
    if(l==n && r==n){
        ans.push_back(temp);
        return;
    }

    if(l<n){
        temp.push_back('(');
        generate(ans,n,l+1,r,temp);
        temp.pop_back();
    }
    if(r<l){
        temp.push_back(')');
        generate(ans,n,l,r+1,temp);
        temp.pop_back();
    }
}

int main(){
    int n=4;
    vector<string> ans;
    string s;
    generate(ans,n,0,0,s);
     for (int i = 0; i < ans.size(); i++) {
        cout << i+1<<" "<<ans[i] << endl;
        
    }
}