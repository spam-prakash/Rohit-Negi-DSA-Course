#include<iostream>
using namespace std;

int main(){
    int a=10;
    int *ptr=&a;
    cout<<ptr<<" "<<*ptr<<" "<<a<<endl;
    *ptr=20;
    cout<<ptr<<" "<<*ptr<<" "<<a<<endl;


    // Pointers are stotred in HexaDecimal form...
    // Its size depends on RAM size and does not depent on the data type of value
    // 4GB or less ==> 4bytes
    // More then 4GB ==> 8bytes
}