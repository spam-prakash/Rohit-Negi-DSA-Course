#include<iostream>
using namespace std;

int linear_search(int arr[],int x,int index){
    if(index==-1)
        return -1;
    if(arr[index]==x){
        return index;
    }else{
        return linear_search(arr,x,index-1);
    }
}

int main(){
    int arr[]={11,22,33,44,55};
    int x=11;
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<linear_search(arr,x,size);
}