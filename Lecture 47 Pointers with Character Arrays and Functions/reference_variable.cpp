
#include<iostream>
using namespace std;

// int main(){
//     // int first=10,second=20;
//     int num=10;
//      int &temp=num;          //temp has became a reference variable for the num variable which means that both temp and num will point to the same memory addres. If we change the value through one variable then it will refrect to all the reference variable;
//     cout<<temp<<endl;     //10;
//     temp++;
//     cout<<num<<endl;       //11
//     num++;
//     cout<<temp<<endl;       //11
// }



void swapping (int &p1,int &p2){
    int temp=p1;
    p1=p2;
    p2=temp;
}

int main(){
    int first=10,second=20;
    swapping(first,second);
    cout<<"first="<<first<<" second="<<second<<endl;
}