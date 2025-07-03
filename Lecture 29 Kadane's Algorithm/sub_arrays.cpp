
#include<iostream>
#include <vector>
using namespace std;

int main(){
    int arr[]={4,3,7,2};
    int size=sizeof(arr)/sizeof(arr[0]);

    // size: 1
    for(int i=0;i<size;i++){
        for(int j=i;j<size;j++){
            cout<<arr[j];
        }
        cout<<endl<<endl;
    }
}