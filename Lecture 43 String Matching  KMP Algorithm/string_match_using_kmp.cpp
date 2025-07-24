
#include<iostream>
#include<string>
#include<vector>
using namespace std;

vector <int> lpsfind(vector<int>&arr, string s){
    int pre=0,suf=1;

    while(suf<s.size()){
        if(s[pre]==s[suf]){
            arr[suf]=pre+1;
            pre++;
            suf++;
        }else{
            if(pre==0){
                arr[suf]=0;
                suf++;
            }else{
                pre=arr[pre-1];
            }
        }
    }
    return arr;
}

int main(){
    string haystack="abcdaabceaabceaabdop", needle="aabceaabdo";
    vector<int>lps(needle.size(),0);
    lpsfind(lps,needle);    
    int first=0, second=0;
    while(second<needle.size()&&first<haystack.size()){
        if(needle[second]==haystack[first]){
            second++;
            first++;
        }else{
            if(second==0){
                first++;
            }else{
                second=lps[second-1];
            }
        }
    }
    // cout<<first-second;
    if(second==needle.size()){
        cout<<first-second;
    }else{
        cout<<-1;
    }

}