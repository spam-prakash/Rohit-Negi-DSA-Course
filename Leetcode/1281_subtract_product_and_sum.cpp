
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    int num=234;
    string n=to_string(234);
    int product=1,sum=0;

    // for(auto x:n){
    //     x=x-'0';
    //     cout<<x;
    //     product*=x;
    //     sum+=x;
    // }

    while(num>0){
        int temp=num%10;
        product*=temp;
        sum+=temp;
        num/=10;
    }

    cout<<product-sum;
}