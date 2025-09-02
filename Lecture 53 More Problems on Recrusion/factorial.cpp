
#include<iostream>
using namespace std;

int fact(int n){
    if(n==1||n==0){
        return 1;
    }else if(n<0){
        cout<<"NO NEGATIVE NUMBER ALLOWED."<<endl;
        return -1;
    }
    return n*fact(n-1);
}

int main(){
    int n;
    cout<<"ENTER NUMBER: ";
    cin>>n;
    cout<<"Factorial is: "<<fact(n);
}