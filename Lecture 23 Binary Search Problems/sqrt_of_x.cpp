
#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"ENTER NUMBER: ";
    cin>>n;

    int start=1,end=n,mid,ans;

    while(start<=end){
        mid=start+(end-start)/2;
        if((mid*mid)==n){
            ans=mid;
            break;
        }
        else if((mid*mid)>n){
            end=mid-1;
        }else if((mid*mid)<n){
            ans=mid;
            start=mid+1;
        }
    }
    cout<<ans;
}