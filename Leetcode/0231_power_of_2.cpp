
#include<iostream>
using namespace std;

int main(){
    int x=6;
    bool flag;
    // flag= (x>0) && ((x&(x-1))==0);

    if(x<=0){
        flag=false;
        return 0;
    }

    flag= ((x&(x-1))==0)?true:false;
    cout<<flag;
}