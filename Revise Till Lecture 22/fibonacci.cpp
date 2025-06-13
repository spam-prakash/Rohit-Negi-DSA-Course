
#include <iostream>
using namespace std;

int main(){
    int first=0,second=1,next;
    int n;
    cout<<"ENTER NUMBER: ";
    cin>>n;

    for(int i=3;i<=n;i++){
        next=first+second;
        cout<<next<<" ";
        first=second;
        second=next;
    }
}