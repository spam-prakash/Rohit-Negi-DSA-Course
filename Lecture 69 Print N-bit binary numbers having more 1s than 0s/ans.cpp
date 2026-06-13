
#include<iostream>
#include<vector>
using namespace std;

void find(vector<string>&ans, int n, string &temp, int zero, int one){
    if(temp.size()==n){
        ans.push_back(temp);
        return;
    }
    if(zero<one){
        temp.push_back('0');
        find(ans,n,temp,zero+1,one);
        temp.pop_back();
    }

    temp.push_back('1');
    find(ans,n,temp,zero,one+1);
    temp.pop_back();
}

int main(){
    vector<string>ans;
    int n=2;
    string temp;
    find(ans,n,temp,0,0);

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<endl;
    }
}