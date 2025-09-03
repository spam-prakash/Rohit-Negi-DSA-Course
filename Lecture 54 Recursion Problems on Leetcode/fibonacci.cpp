#include<iostream>
using namespace std;

int fibonacci(int n){
    int first=0,second=1;
    if(n<=1){
        return n;
    }

    return fibonacci(n-1)+fibonacci(n-2);
}

int main(){

    int n;
    cout<<"ENTER NUMBER: ";
    cin>>n;
    cout<<fibonacci(n);
}