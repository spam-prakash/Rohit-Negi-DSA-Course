
#include<iostream>
using namespace std;

int pow(int num,int p){
    if(p==0) return 1;
    return num*pow(num,p-1);
}

int main(){
    int num,p;
    cout<<"ENTER NUMBER AND POWER: ";
    cin>>num>>p;
    cout<<pow(num,p);
}