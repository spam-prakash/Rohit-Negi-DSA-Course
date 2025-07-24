
#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    string s1="abacdabad", s2="abad";

   int n=s1.size(),m=s2.size();

   bool found = false;
   for(int i=0;i<=n-m;i++){
       int first = i, second = 0;
       while(second < m){
           if(s1[first] != s2[second]){
               break;
           } else {
               first++;
               second++;
           }
       }
       if(second == m){
           cout << i << " ";
           found = true;
       }
   }
   if(!found){
       cout << -1;
   }
}