
#include<iostream>
using namespace std;

void print (int a[],int size){
    if(size==0) return;
    size--;
    print(a,size);
    cout<<a[size]<<" ";
}

// void print(int a[],int index,int size){
//     if(index==size) return;
//     cout<<a[index]<<" ";
//     print(a,index+1,size);
// }

int main(){
    int arr[5]={3,5,1,7,0};
    print(arr,5);
    return 0;
}