
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

vector<int> findlps(vector<int> &arr, string s){
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
    string s="abc";
    int orgSize=s.size();
    string rev = s;
    reverse(rev.begin(), rev.end());
    s.push_back('$');
    s += rev;
    // int revSize=rev.size();
    int size=s.size();
    vector<int> lps(size,0);
    findlps(lps,s);

    cout<<orgSize-lps[lps.size()-1];
}