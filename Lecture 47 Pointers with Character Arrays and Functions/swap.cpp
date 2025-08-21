
#include<iostream>
using namespace std;

void Swap(int *f,int *s){
    int temp=*f;
    *f=*s;
    *s=temp;
}

int main(){
    int a=5,b=6;
    Swap(&a,&b);
    cout<<"a="<<a<<" "<<"b="<<b;
}