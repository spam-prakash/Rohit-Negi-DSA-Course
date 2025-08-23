
#include<iostream>
using namespace std;

int main(){
    int n=10;
    int *p1=&n;     //Single Pointer
    int **p2=&p1;   // Double Pointer
    int ***p3=&p2;  //Trible Pointer
    ***p3=20;
    cout<<n<<endl;
    int ****p4=&p3; //Quad Pointer
    ****p4=****p4+20;
    cout<<n<<endl;
    return 0;
}