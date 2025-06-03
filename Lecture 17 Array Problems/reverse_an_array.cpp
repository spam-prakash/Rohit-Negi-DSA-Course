
#include<iostream>
using namespace std;

int main(){
    int arr[]={10,12,14,16,18,20};
    int size=sizeof(arr)/sizeof(arr[0]);
    int* newArr = new int[size];
    
    // for(int i=0;i<size;i++){
        //     newArr[i]=arr[size-i-1];
        // }
        
    int i=size-1,j=0;
    while(i>=0){
        newArr[j]=arr[i];
        j++;
        i--;
    } 
    
    for(int i=0;i<size;i++){
        cout<<newArr[i]<<" ";
    }
}