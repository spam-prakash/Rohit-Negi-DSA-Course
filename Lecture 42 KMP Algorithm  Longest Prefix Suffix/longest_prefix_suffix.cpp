
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    string s="ABCDEABCD";
    vector<string>prefix;
    vector<string>suffix;

    
        prefix.push_back(string(1, s[0]));
        for(int j=1;j<s.size()-1;j++){
            prefix.push_back(s.substr(0, j + 1));
        }      
        
        // suffix.push_back(string(1,s[s.size()-1]));
        for(int i=0;i<s.size();i++){
            suffix.push_back(s.substr(i));
        }
        reverse(suffix.begin(),suffix.end());
        suffix.pop_back();
    

    
    int len=0;
    for(int i=0;i<prefix.size();i++){
        if(prefix[i]==suffix[i]){
            len=prefix[i].size();
        }
    }
    cout<<len;
}