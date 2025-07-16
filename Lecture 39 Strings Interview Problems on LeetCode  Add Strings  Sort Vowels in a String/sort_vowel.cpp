#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
    string s="lEetcOde";
    vector<int>lower(26,0);
    vector<int>upper(26,0);

    for(int i=0;i<s.size();i++){
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
            lower[s[i]-'a']++;
            s[i]='#';
        }else if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
            upper[s[i]-'A']++;
            s[i]='#';
        }
    }

    string ans;

    for(int i=0;i<26;i++){
        char temp='A'+i;
        while(upper[i]){
            ans+=temp;
            upper[i]--;
        }
    }

    for(int i=0;i<26;i++){
        char temp='a'+i;
        while(lower[i]){
            ans+=temp;
            lower[i]--;
        }
    }

    int ans_count=0;
    
    for(int i=0;i<s.size();i++){
        if(s[i]=='#'){
            s[i]=ans[ans_count];
            ans_count++;
        }
    }
    cout<<s;

}