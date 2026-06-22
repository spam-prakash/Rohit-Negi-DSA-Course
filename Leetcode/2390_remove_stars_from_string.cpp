#include<iostream>
#include<string>
using namespace std;

// void remove_string(string s, int n, string &ans){
//     for(int i=0;i<n;i++){
//         if(s[i]=='*'){
//             ans.pop_back();
//         } else{
//             ans.push_back(s[i]);
//         }
//     }
// }

// int main(){
//     string s="leet**cod*e";
//     string ans="";
//     int n=s.size();
//     remove_string(s,n,ans);
//     cout<<ans;
// }

int main(){
    string s="leet**cod*e";
    string ans;

    for(char ch:s){
        if(ch=='*'){
            ans.pop_back();
        } else{
            ans.push_back(ch);
        }
    }

    cout<<ans;
}