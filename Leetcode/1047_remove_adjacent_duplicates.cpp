
#include<iostream>
#include<string>
using namespace std;

int main(){
    string s="abbaca";
    // cout<<s;
    string ans;
    // cout<<ans.empty();

    for(char ch:s){
        if(ans.empty()){
            ans.push_back(ch);
        }else if(ans.back()==ch){
            ans.pop_back();
        }else{
            ans.push_back(ch);
        }
    }

    cout<<ans;
}