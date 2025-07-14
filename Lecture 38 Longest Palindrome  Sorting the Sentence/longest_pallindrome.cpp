
#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
    string s="AAAAAA";
    vector<int>upper(26,0);
    vector<int>lower(26,0);

    for(int i=0;i<s.size();i++){
        if(s[i]>='a'){
            lower[s[i]-'a']++;
        }else{
            upper[s[i]='A']++;
        }
    }
    int ans=0;
    for(int i=0;i<26;i++){
        if(lower[i]%2==0){
            ans+=lower[i];
        }else if(lower[i]%2==1){
            ans+=(lower[i]/2)*2;
        }
        if(upper[i]%2==0){
            ans+=upper[i];
        }else if(upper[i]%2==1){
            ans+=(upper[i]/2)*2;
        }
    }

    for(int i=0;i<26;i++){
        if(lower[i]%2==1){
            ans++;
            break;
        }
        if(upper[i]%2==1){
            ans++;
            break;
        }
    }
    cout<<ans;
    
}