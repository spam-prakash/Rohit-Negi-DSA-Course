
#include<iostream>
using namespace std;

void print(int n){
    if(n<1){
        return;
    }
    cout<<n<<" ";
    print(n-2);
}

int main(){
    int n;
    cin>>n;
    if(n%2==0){
        print(n);
    }else{
        print(n-1);
    }
}