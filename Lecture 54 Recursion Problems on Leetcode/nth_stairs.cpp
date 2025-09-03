
#include<iostream>
using namespace std;

int stairs(int n){
    if(n<=2){
        return n;
    }

    return stairs(n-2)+stairs(n-1);
}

int main(){
    int n=5;
    cout<<stairs(n);
}