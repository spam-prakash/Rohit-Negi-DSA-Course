
#include<iostream>
#include<vector>
using namespace std;

int winner(vector<bool>&person,int person_left,int n, int k, int index){
   if(person_left==1){
    for(int i=0;i<n;i++){
        if(person[i]==0){
            return i;
        }
    }
   }

   int kill=(k-1)%person_left;

   while(kill--){
    index=(index+1)%n;
    while(person[index]==1){
        index=(index+1)%n;
    }
   }
   person[index]=1;
   while(person[index]==1){
    index=(index+1)%n;
   }

   return winner(person,person_left-1,n,k,index);
}

int main(){
    int n=5,k=3,index;
    vector<bool> person(n,0);
    int person_left=n;

    int result=winner(person,person_left,n,k,0);
    cout<<result;
}