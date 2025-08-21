
#include<iostream>
using namespace std;

// void increment(int n){
//     n++;
// }

void increment(int *n){
    *n=*n+1;
    *n++;       //WRONG
}

int main(){
    int num=10;
    int temp=num;
    // increment(num);
    increment(&num);
    cout<<num;
}