
#include<iostream>
using namespace std;

int sum(int a[],int size){
    if(size==0) return 0;
    return a[size-1]+sum(a,size-1);
}

int main(){
    int arr[5]={5,1,3,8,2};
    cout<<sum(arr,5);
    return 0;
}