
#include<iostream>
#include<string>
using namespace std;

int main(){
    string s="leetcode";
    int arr[26]={0};

    for(int i=0;i<s.size();i++){
        arr[static_cast<int>(s[i]) - static_cast<int>('a')]++;
    }
    // cout<<static_cast<int>('a');
    bool isPangram = true;
    for(int i=0;i<26;i++){
        if(arr[i]==0){
            isPangram = false;
            break;
        }
    }
    if(isPangram){
        cout << "YES";
    } else {
        cout << "NO";
    }

}