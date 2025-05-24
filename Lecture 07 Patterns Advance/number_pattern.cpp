// 1
// 2 2
// 3 3 3
// 4 4 4 4
// 5 5 5 5 5

#include <iostream>
using namespace std;

int main(){
    int count=0;

    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            cout<<count+i<<" ";
        }
        cout<<endl;
    }
}