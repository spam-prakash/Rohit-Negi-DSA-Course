
#include<iostream>
#include<string>
using namespace std;

int main(){
    string s = "a#c", t = "b#c";
    string final_s, final_t;

    for(char ch: s){
        if(ch=='#'){
            if(!final_s.empty())
                final_s.pop_back();
        } else{
            final_s.push_back(ch);
        }
    }

    for(char ch: t){
        if(ch=='#'){
            if(!final_t.empty())
                final_t.pop_back();
        } else{
            final_t.push_back(ch);
        }
    }

   final_s==final_t ? cout<<"true" : cout<<"false";
}