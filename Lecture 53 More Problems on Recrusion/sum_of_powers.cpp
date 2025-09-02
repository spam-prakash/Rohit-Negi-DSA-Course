
#include<iostream>
using namespace std;

int sum(int n){
    if(n==1) return 1;
    return (n*n)+sum(n-1);
}

int main(){
    int a;
    cout<<"ENTER NUMBER: ";
    cin>>a;
    cout<<sum(a);
}