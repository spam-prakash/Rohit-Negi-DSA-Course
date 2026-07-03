
#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    vector<string>patterns={"a","abc","bc","d"};
    string word="abc";
    int count=0;

    for(auto c: patterns){
        if(word.find(c) != string::npos){
            count++;
        }
    }
    cout<<count;
}