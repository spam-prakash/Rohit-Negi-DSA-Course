
// #include<iostream>
// using namespace std;

// void fun(int *p1, int *p2){
//     p1=p2;
//     *p1=2;
// }

// int main(){

//     int i=0,j=1;
//     fun(&i,&j);
//     cout<<i<<" "<<j<<endl;

//     return 0;
// }


// #include<iostream>
// using namespace std;

// int main(){

//     int x=10;
//     int *ptr=&x;
//     int y=*ptr;
//     *ptr=20;
//     cout<<x<<" "<<y<<endl;

//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int a=5,b=10;
//     int &name=a;
//     int *ptr=&a;
//     (*ptr)++;
//     ptr=&b;
//     *ptr=*ptr+5;
//     name=name+5;
//     cout<<a<<" "<<b;
// }

// #include<iostream>
// using namespace std;

// int four(int x, int *pz,int **ppz){
//     int y,z;
//     **ppz=**ppz+1;  
//     z=**ppz;        //z=5
//     *pz=*pz+2;
//     y=*pz;          //y=7
//     x=x+3;          //x=7
//     return x+y+z;   //19
// }

// int main(){
//     int c=4,*b=&c,**a=&b;

//     cout<<four(c,b,a);

// }


#include<iostream>
using namespace std;

void five(char *str1, char *str2){
    while((*str1=*str2)){
        str1++;str2++;
    }
}

int main(){
    char first[]="Mohit";
    char second[]="Rohan";
    five(first,second);
    cout<<first;
    return 0;
}