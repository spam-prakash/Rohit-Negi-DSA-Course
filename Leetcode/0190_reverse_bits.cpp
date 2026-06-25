
#include<iostream>
#include<string>
using namespace std;

// int main(){
//     int x=43261596;
//     string s;

//     while(x>0){
//         s.push_back('0'+(x%2));
//         x/=2; 
//     }

//     // string temp;
//     // int n=s.size();
//     // for(int i=n-1;i>=0;i--){
//     //     temp.push_back(s[i]);
//     // }

//     // long long rev_str= stoll(temp);

//     int ans=0;
//     for(char ch:s){
//         ans=(ans<<1)|(ch-'0');
//     }

//     cout<<s<<endl<<ans;
// }

int main(){
    int x=43261596;
    int ans=0;
    for(int i=0;i<32;i++){
        ans=(ans<<1)|(x&1);
        x>>=1;
    }
    cout<<ans;
}