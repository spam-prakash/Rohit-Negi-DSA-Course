
#include <iostream>
using namespace std;

int factorial(int n){
    if(n==0){
        return 1;
    }
    int fact;
    for(int i=1;i<=n;i++){
        return n*factorial(n-1);
    }
}

int main(){
    int n;
    cout<<"ENTER NUMBER: ";
    cin>>n;
    cout<<factorial(n);
}