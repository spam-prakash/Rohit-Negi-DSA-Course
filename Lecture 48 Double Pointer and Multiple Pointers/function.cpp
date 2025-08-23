
#include<iostream>
using namespace std;

void fun(int *&p){
    // p = p + 5;
    p = p + 1;
}

int main(){
    int n=10;
    int *p=&n;
    // fun(p);
    cout<<p<<endl;      //Prints actual value of p (address of n);

    // if we want to increment the address then
    // int **ptr=&p;
    // fun(ptr);
    // cout<<p<<endl;


    // Using reference variable instead of double pointers
    fun(p);
    cout << p << endl;

}