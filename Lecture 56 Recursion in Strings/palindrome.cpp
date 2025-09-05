
#include<iostream>
#include<string.h>
using namespace std;
    
int pal(string str, int start,int end ){
    if(start>=end){
        return 1;
    }

    if(str[start]!=str[end]){
        return 0;
    }
    return pal(str,start+1,end-1);
    
}

int main(){
    string s;
    cout<<"ENTER A WORD :";
    cin>>s;
    if(pal(s,0,s.length()-1)){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
}