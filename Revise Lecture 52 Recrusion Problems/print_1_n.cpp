
#include<iostream>
using namespace std;


void print(int end,int s){
    // Base Case
    if(s==end){
        cout<<s;
        return;
    }
    cout<<s<<endl;
    print(end,s+1);

}

int main(){
    print(6,1);
    return 0;
}