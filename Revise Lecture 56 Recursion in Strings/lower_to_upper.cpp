
#include<iostream>
#include<string>
using namespace std;

void lower_to_upper(string &s,int index){
    if(index==-1) return;
    int temp=s[index]-('a'-'A');
    // s[index]=static_cast<char>(temp);
    s[index]='A'+s[index]-'a';
    lower_to_upper(s,index-1);
}

int main(){
    string s="xygjhh";
    lower_to_upper(s,s.size()-1);
    cout<<s;
    return 0;
}