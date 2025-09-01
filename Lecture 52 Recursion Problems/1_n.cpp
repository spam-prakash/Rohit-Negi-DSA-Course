
#include<iostream>
using namespace std;

void print(int num,int ch){
  if(num>ch){
    return;
  }
  cout<<num<<" ";
  print(num+1,ch);
}

int main(){
    int ch;
    cout<<"ENTER CH: ";
    cin>>ch;
    int num=1;
    print(num,ch);
}