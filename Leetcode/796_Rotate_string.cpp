
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string s="abcde", goal="cdeab";
    
    if(s.size()!=goal.size()){
        cout<<"false";
        return 0;
    }

    string str=s+s;

    str.contains(goal) ? cout<<"true" : cout<<false;

    
}