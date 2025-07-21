
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string s="ABCABDABCABCDAB";
    int pre=0,suf=1;
    vector<int> count(s.size(),0);
    while(suf<s.size()){
        if(s[pre]==s[suf]){
            count[suf]=pre+1;
            pre++;
            suf++;
        }else{
            if(pre==0){
                count[suf]=0;
                suf++;
            }else{
                pre=count[pre-1];
            }
        }
    }
    cout<<count[s.size()-1];
}