
#include<iostream>
#include<string>
using namespace std;

int main(){
    int x=-120;
    string s=to_string(x);
    int n=s.length();
    string temp;
    if(x<0) temp.push_back('-');
    for(int i=n-1;i>=0;i--){
        if(s[i]-'0'>=0){
            temp.push_back(s[i]);
        }
    }
    int an = stoi(temp);
    
    cout<<an;

}