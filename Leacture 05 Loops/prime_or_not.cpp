#include <iostream>
using namespace std;

int main(){
    int n=13;
    bool isPrime=1;

    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            isPrime=0;
            break;
        }
    }

    if(isPrime)
        cout<<"PRIME";
    else
        cout<<"NOT PRIME";
    
    return 0;
}