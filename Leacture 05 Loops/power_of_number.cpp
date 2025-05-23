#include<iostream>
using namespace std;

int main(){
    int n,pow;

    cout<<"ENTER NUMBER: ";
    cin>>n;
    cout<<"ENTER POWER: ";
    cin>>pow;
    int num=n;
    for(int i=1;i<pow;i++){
        num=num*n;
    }
    cout<<num;
    return 0;
}