
#include<iostream>
using namespace std;

int main(){
    int n=100;
    cout<<"n= "<<n<<endl;
    int *p=&n;
    cout<<"Value of n through pointer= "<<*p<<endl;
    cout<<"address of n= "<<p<<endl;

    int **ptr=&p;
    cout<<"value of n through double pointer= "<<**ptr<<endl;
    cout<<"address of p= "<<ptr<<endl;

    return 0;
}