
#include<iostream>
using namespace std;

int search(int a[],int key,int index){
    if(index==-1) return -1;
    if(a[index]==key) return index;
    search(a,key,index-1);
}

int main(){
    int arr[5]={1,4,2,5,3};
    cout<<search(arr,2,4);
}