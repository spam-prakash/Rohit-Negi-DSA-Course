
#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    vector<string> logs = {"d1/","d2/","./","d3/","../","d31/"};
    int count=0;
    for(string s: logs){
        if(s[0]=='.' && s[1]=='.'){
            if(count>0)
                count--;
        } else if(s[0]=='.'){
            continue;
        }
        else{
            count++;
        }
    }

    cout<<count;
}