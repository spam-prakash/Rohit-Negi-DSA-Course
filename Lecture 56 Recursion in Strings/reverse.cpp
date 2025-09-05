
#include<iostream>
#include<string.h>
using namespace std;

void reverse(string &s,int start,int end){
    if(start>=end){
        return;
    }

    char c;
    c=s[start];
    s[start]=s[end];
    s[end]=c;
    reverse(s,start+1,end-1);
}

int main(){
    string s="prakash";
    reverse(s,0,s.length()-1);
    cout<<s;
}