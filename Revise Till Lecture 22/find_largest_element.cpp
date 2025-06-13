
#include<iostream>
#include<climits>
using namespace std;

int main(){
    int arr[]={58,45,145455,45,22,1,2,5,48488,45,1,5,448};
    int size=sizeof(arr)/sizeof(arr[0]);
    int max=INT_MIN;

    for(int i=0;i<size;i++){
        if(arr[i]>max)
            max=arr[i];
    }
    cout<<max;
}