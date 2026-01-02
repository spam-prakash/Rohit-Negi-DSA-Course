
#include<iostream>
using namespace std;

void printEven(int n){
    if(n<1){
        return;
    }
    printEven(n-2);
    if(n%2==0){
        cout<<n<<endl;
    }
}

int main(){
    int n=13;
    if(n%2==1) printEven(n-1);
    printEven(n);
    return 0;
}