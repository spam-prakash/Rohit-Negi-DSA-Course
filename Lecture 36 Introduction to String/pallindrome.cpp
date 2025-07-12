
#include<iostream>
#include<string>
using namespace std;

int main(){
    string s ="naman";
    int size=s.size();
    int start=0,end=size-1;
    while(start<end){
        if(s[start]!=s[end]){
            cout<<"NO";
            return 0;
        }start++;
        end--;
    }
    cout<<"YES";
}