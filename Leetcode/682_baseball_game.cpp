
#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    vector<string> operations={"5","-2","4","C","D","9","+","+"};
    int n=operations.size();
    vector<int>score;
    int total=0;

    for(int i=0;i<n;i++){
        if(operations[i]=="+"){
            int val=score[score.size()-1]+score[score.size()-2];
            score.push_back(val);
            total+=val;
        } else if(operations[i]=="C"){
            total -= score.back();
            score.pop_back();
        } else if(operations[i]=="D"){
            int val=(score[score.size()-1])*2;
            score.push_back(val);
            total+=val;
        }else{
            int val=stoi(operations[i]);
            score.push_back(val);
            total+=val;
        }
    }

    cout<<total;
}