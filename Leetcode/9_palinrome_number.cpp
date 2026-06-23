
#include<iostream>
#include<string>
using namespace std;

int main(){
    int n=1;
    string s=to_string(n);
    int start=0,end=s.size()-1;
    bool flag=false;

    if(s.size()<2){
        cout<<true;
        return 0;
    }
    while(start<end){
        if(s[start]==s[end]){
            flag=true;
            start++;
            end--;
        }else{
            flag=false;
           break;
        }
    }
    cout<<flag;
}