#include<iostream>
using namespace std;

void hb(int n){
    // Base Case
    if(n==0){
        cout<<"Happy Birthday.";
        return;
    }
    cout<<n<<" days left...\n";
    // Recrusive Case
    hb(n-1);
}

int main(){
    hb(10);
    return 0;
}