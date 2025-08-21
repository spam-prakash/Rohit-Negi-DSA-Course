#include <iostream>
using namespace std;

int main(){
    // char arr[5]="1234";
    // cout<<arr<<endl;    //Prints value
    // char *ptr=arr;
    // cout<<ptr<<endl;    //Prints value
    // cout<<(void*)arr<<endl;   //Prints Address
    // cout<<(void*)ptr<<endl;   //Prints Address
    // cout<<&arr<<endl;


    char name='b';
    char *ptr1=&name;
    cout<<ptr1<<endl;     //Prints garbage value after the actual name
    cout<<(void*)ptr1<<endl;      //Prints Address
}