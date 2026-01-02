
#include<iostream>
using namespace std;

void print(int n){
    if(n==1){
        cout<<n<<endl;
        return;
    }
    print(n-1);
    cout<<n<<endl;
}

int main(){
    print(8);
    return 0;
}