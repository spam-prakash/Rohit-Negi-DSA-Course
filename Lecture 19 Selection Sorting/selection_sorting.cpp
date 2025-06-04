
#include<iostream>
#include<climits>
using namespace std;

int swap(int *x, int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;

    // return *x,*y;
}

int selection_sort(int arr[],int size){
    for(int i=0;i<size-1;i++){
        int index=i;
        for(int j=i;j<size;j++){
            if(arr[index]>arr[j]){
                index=j;
            }
        }
        if(index!=i)
            swap(&arr[index],&arr[i]);
    }
   
}

int main(){
   int arr[5] = {9, 7, 5, 3, 1};
    int size=sizeof(arr)/sizeof(arr[0]);

    int a=5,b=6;

    selection_sort(arr,size);

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    // swap(a,b);
    // cout<<a<<b;

}