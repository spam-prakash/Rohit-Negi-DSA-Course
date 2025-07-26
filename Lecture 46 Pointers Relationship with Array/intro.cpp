
#include<iostream>
using namespace std;

int main(){
    int arr[]={2,3,4,5,6,7,8,9};

    // Address of first element
    cout<<arr<<endl;
    cout<<arr+0<<endl;
    cout<<&(arr[0])<<endl;

    // Address of other elements
    cout<<arr+1<<endl;
    cout<<arr+2<<endl;
    cout<<arr+3<<endl;
    cout<<arr+4<<endl;
    cout<<arr+5<<endl;
    cout<<arr+6<<endl;
    cout<<arr+7<<endl;
    // cout<<arr+8<<endl;

    // PRINT VALUES
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
        cout<<*(arr+i)<<" ";
    }
    cout<<endl;

    // PRINT ADDRESS
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
        cout<<(arr+i)<<" ";
    }
    cout<<endl;

    // Using Arithemetic Operations
    int *ptr=&arr[sizeof(arr)/sizeof(arr[0])-1];
    for(int i=sizeof(arr)/sizeof(arr[0]);i>0;i--){
        cout<<*ptr<<" ";
        ptr--;
    }
}