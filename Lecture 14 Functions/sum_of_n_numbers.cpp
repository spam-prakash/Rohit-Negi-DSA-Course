
#include <iostream>
using namespace std;

int addition(int n){
    int sum=0;
    for(int i=0;i<=n;i++){
        sum+=i;
    }
    return sum;
}

int main(){
    int n;
    cout<<"ENTER NUMBER: ";
    cin>>n;

    cout<<addition(n);
}