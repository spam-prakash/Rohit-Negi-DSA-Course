
#include<iostream>
#include<cmath>
using namespace std;

bool check(int number,  int arr[], int size){
    while(number>0){
        int digit=number%10;
        for(int i=0;i<size;i++){
            if(digit==arr[i]){
                return true;
            }
        }
        number/=10;
    }
    return false;
}

int main(){
    int arr[]={3,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    int n=2;
    int count=0;
    int start=pow(10,n-1);
    int end=pow(10,n)-1;
 
    for(int i=start;i<=end;i++){
        if(check(i,arr,size)){
            count++;
        }
    }
    cout<<count;
}