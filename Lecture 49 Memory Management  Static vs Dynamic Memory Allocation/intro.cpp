
#include<iostream>
using namespace std;

int main(){
    int *ptr= new int;
    *ptr=20;
    cout<<*ptr<<endl;
    int n;
    cout<<"ENTER N: ";
    cin>>n;

    int *ptr1=new int[n];
    for(int i=0;i<n;i++){
        cin>>ptr[i];
    }
    cout<<"ELEMENTS ARE: ";
    for(int i=0;i<n;i++){
        cout<<ptr[i]<<" "; 
    }

    delete ptr;
    delete[] ptr1;
    return 0;
}