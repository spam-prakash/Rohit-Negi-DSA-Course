
#include<iostream>
#include<string.h>
using namespace std;

int count(string s,int index){
    if(index==-1){
        return 0;
    }

    if(s[index]=='a'||s[index]=='e'||s[index]=='i'||s[index]=='o'||s[index]=='u'){
        return 1+count(s,index-1);
    }else{
        return count(s,index-1);
    }
}

int main(){
    string s="prakash";
    // cout<<s.length()-1;
    cout<<count(s,s.length()-1);
}