
#include<iostream>
using namespace std;

int power(int s,int n){
    if(n==0){
        return 1;
    }

    return s*power(s,n-1);
}

int main(){
    int n=3;
    cout<<power(2,n);
    return 0;
}