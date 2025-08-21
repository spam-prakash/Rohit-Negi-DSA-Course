
#include<iostream>
using namespace std;

void Double(int arr[]){     //int *p==int arr[]
    for(int i=0;i<5;i++){
        arr[i]*=2;
    }
}

int main(){
    int arr[5]={1,2,3,4,5};
    Double(arr);

    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}