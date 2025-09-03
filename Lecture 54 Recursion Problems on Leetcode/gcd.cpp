
#include<iostream>
using namespace std;

int gcd(int a,int b){
    if(a%b==0) return b;
    else return  gcd(b,a%b);
}

int main(){
    int a=17,b=34;
    cout<<gcd(a,b);
}