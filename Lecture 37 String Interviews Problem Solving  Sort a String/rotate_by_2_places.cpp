
#include<iostream>
#include<string>
using namespace std;

void rotate_clockwise(string &s){
    char temp=s[s.size()-1];
    for(int i=s.size()-1;i>=0;i--){
        s [i+1]=s[i];
    }
    s[0]=temp;

}

void rotate_anticlockwise(string &s){
    char temp=s[0];
    for(int i=1;i<s.size();i++){
        s[i-1]=s[i];
    }
    s[s.size()-1]=temp;
}


int main(){
    string s1="leetcode", s2="deleetco";
    string clockwise=s1,anticlockwise=s1;
         rotate_clockwise(clockwise);
         rotate_clockwise(clockwise);
         if(clockwise==s2){
            cout<<"YES";
             return 1;
         }
         rotate_anticlockwise(anticlockwise);
         rotate_anticlockwise(anticlockwise);
         if(anticlockwise==s2){
            cout<<"YES";
             return 1;
         }
         
         return 0;

    
}