
#include<iostream>
#include<string>
using namespace std;

// int main(){
//     int x=11;
//     string s;

//     while(x>0){
//         s.push_back('0'+(x%2));
//         x/=2;
//     }
//     int count=0;
//     for(char ch:s){
//        if(ch-48==1){
//         count++;
//        }
//     }
//     cout<<count;
// }

// Optimized Solution

int main(){
    int x=11;
    int count =0;

    while(x){
        count+=x &1 ;
        x>>=1;
    }
    cout<<count;
}