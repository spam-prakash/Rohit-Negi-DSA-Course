
#include<iostream>
#include<string.h>
using namespace std;

void upper(string &s,int index){
    if(index==-1){
        return;
    }
    s[index]=s[index]-32;
    upper(s,index-1);
}

int main(){
    string s;
    cout<<"ENTER STRING: ";
    cin>>s;
    upper(s,s.length()-1);
    cout<<s;
}