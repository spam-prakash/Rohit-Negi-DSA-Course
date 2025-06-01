
#include<iostream>
#include <cmath>
using namespace std;

bool checkArmstrong(int n){

    if(n==0)
        return 1;
   int original=n;
   int sum=0;
   int digits=0;

//    Count Digits
   int temp=n;
    while(temp>0){
        temp/=10;
        digits++;
    }
    
    // Actual Sum
    temp=n;
    while(temp>0){
        int ans=1;
        int rem=temp%10;
        for(int i=1;i<=digits;i++){
            ans=ans*rem;
        }
        temp/=10;
        sum+=ans;
    }
    return original==sum;
    
    
}

int main(){
    int n;
    cout<<"ENTER NUMBER: ";
    cin>>n;
    if(checkArmstrong(n))
        cout<<"Armstrong.";
    else
        cout<<"Not Armstrong.";

}