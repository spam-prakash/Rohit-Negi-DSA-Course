
#include<iostream>
using namespace std;

void printEven(int num,int ch){
    if(num>ch){
        return;
    }
    cout<<num<<" ";
    printEven(num+2,ch);
} 

int main(){
    int num=2,ch;
    cout<<"ENTER CH: ";
    cin>>ch;
    (ch%2==0)?printEven(num,ch):printEven(num,ch-1);
}