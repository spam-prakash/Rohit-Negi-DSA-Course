
#include<iostream>
#include<string>
using namespace std;

int main(){
    string s="prakash";

    int size=s.size();
    int start=0,end=size-1;

    while(start<=end){
        swap(s[start],s[end]);
        start++;
        end--;
    }
    cout<<s;
}