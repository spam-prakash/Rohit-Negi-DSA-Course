
#include<iostream>
#include<string>
using namespace std;

void reverse(string &s,int start,int end){
    if(start>=end) return;
    char c=s[start];
    s[start]=s[end];
    s[end]=c;
    reverse(s,start+1,end-1);
}

int main(){
    string s="momo";
    reverse(s,0,s.size()-1);
    cout<<s;
}