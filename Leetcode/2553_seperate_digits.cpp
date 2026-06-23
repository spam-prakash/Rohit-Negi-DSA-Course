
#include<iostream>
#include<vector>
#include<string>
using namespace std;

// int main(){
//     vector<int>nums={13,25,85,77};
//     vector<int>ans;

//     for(int x:nums){
//         vector<int>temp;

//         while(x>0){
//             temp.push_back(x%10);
//             x=x/10;
//         }

//         for(int i=temp.size()-1;i>=0;i--){
//             ans.push_back(temp[i]);
//         }
//     }

//     for(int x: ans){
//         cout<<x<<" ";
//     }
// }

int main(){
    vector<int>nums={13,25,85,77};
    vector<int>ans;

    for(int x:nums){
        string s=to_string(x);
        for(char ch:s){
            ans.push_back(ch-'0');
        }
    }

    for(int x: ans){
        cout<<x<<" ";
    }
}