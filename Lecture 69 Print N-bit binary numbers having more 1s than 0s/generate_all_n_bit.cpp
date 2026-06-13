
#include<iostream>
#include<vector>
using namespace std;

void generate(vector<string> &all, int n, string s){
    if(s.length()==n){
        all.push_back(s);
        return;
    }

    generate(all, n, s+"0");
    generate(all,n, s+"1");

}

// void check(vector<string>&all, int n){
//     if()
// }

int main(){
    int n=3;
    vector<string>all;
    generate(all,n,"");
    // cout<<all.size();
    for(int i=0;i<all.size();i++){
        cout<<all[i]<<endl;
    }
}
