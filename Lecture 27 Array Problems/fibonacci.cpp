
#include<iostream>
using namespace std;

int main(){
    int first=0,second=1,next=0;

    int n=10,i=3;
    cout<<first<<" "<<second<<" "; 
    // int next=first+second;

    while(i<=n){
        next=first+second;
        cout<<next<<" ";
        first=second;
        second=next;
        i++;
    }

    
}