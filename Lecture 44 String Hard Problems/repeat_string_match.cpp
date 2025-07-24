
#include<iostream>
#include<string>
#include<vector>
using namespace std;

vector<int>findlps(vector<int> &arr,string s){
    int pre=0, suf=1;
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

bool kmp_search(string temp, string b){
    int size=temp.size();
    vector<int>lps(b.size(),0);
    findlps(lps,b);

    int first=0,second=0;

    while(first<temp.size()&&second<b.size()){
        if(temp[first]==b[second]){
            first++;
            second++;
        }else{
            if(second==0){
                first++;
            }else{
                second=lps[second-1];
            }
        }
    }

    if(second==b.size()){
        return 1;
    }else{
        return 0;
    }

}

int main(){
    string a="abaa", b="aabaa";

    if(a==b)
        return 1;
    
    int repeat=1;
    string temp=a;
    
    while(temp.size()<b.size()){
        temp+=a;
        repeat++;
    }

    if(kmp_search(temp,b)==1){
        cout<<repeat;
        return 0;
    }
    temp+=a;
    repeat++;
     if(kmp_search(temp,b)==1){
        cout<<repeat;
        return 0;
    }
    return -1;
    
}