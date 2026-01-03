
#include<iostream>
#include<string>
using namespace std;

bool check(string s,int index,int size){
    if(index>=size) return 1;
    if(s[size-1]!=s[index]){
        return 0;
    }
    return check(s,index+1,size-1);
}

int main(){
    string s="paiap";
    int size=s.size();
    cout<<check(s,0,size);
    return 0;
}