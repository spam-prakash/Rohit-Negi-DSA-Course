
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string text="loonbalxballpoon";
    vector<int>count(26,0);

    for(char ch:text){
        count[ch-'a']++;
    }

   cout<< min({
        count['b'-'a'],
        count['a'-'a'],
        count['l'-'a']/2,
        count['o'-'a']/2,
        count['n'-'a']
    });

}