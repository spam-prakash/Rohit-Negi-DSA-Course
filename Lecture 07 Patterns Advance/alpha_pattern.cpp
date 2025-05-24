// a 
// b b 
// c c c
// d d d d 
// e e e e e

#include <iostream>
using namespace std;

int main(){

    for(int i=1;i<=5;i++){
        char name='a'+(i-1);
        for(int j=1;j<=i;j++){
            cout<<name<<" ";
        }
        name++;
        cout<<endl;
    }
    
    return 0;
}