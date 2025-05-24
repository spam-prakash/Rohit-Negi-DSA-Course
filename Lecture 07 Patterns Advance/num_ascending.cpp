#include <iostream>
using namespace std;

int main(){
    int count=0;

    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            cout<<count+j<<" ";
        }
        cout<<endl;
    }
}