
#include<iostream>
using namespace std;

int stairs(int n){
    if(n<=1){
        return 1;
    }
    return stairs(n-1)+stairs(n-2);
}

int main(){
    cout<<stairs(5);
    return 0;
}