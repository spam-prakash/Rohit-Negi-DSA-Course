
#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
    string s="edcab";

    vector<int>count(26,0);
    for(int i=0;i<s.size();i++){
        count[s[i]-'a']++;
    }
char first='a';
string ans;
    for(int i=0;i<26;i++){
        ans+=first*count[i];
        first++;
    }

    cout<<ans; 


}