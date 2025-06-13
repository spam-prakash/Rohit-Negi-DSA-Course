
#include<iostream>
using namespace std;

int sort(int arr[],int size){
    for(int i=0;i<size-1;i++){
        int index=i;
        for(int j=i;j<size-1;j++){
            if(arr[j]<arr[index])
                index=j;
        }
        swap(arr[i],arr[index]);
    }
}

int main(){
    int arr[]={27,24,30,29,8,4};
    int size=sizeof(arr)/sizeof(arr[0]);

    sort(arr,size);
    
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}