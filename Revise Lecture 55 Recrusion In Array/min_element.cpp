
#include<iostream>
using namespace std;

int find(int a[],int size){
    if(size==0) return a[0];
    return min(a[size-1],find(a,size-1));
}

int main(){
    int arr[5]={7,2,4,1,6};
    cout<<find(arr,5);
    return 0;
}