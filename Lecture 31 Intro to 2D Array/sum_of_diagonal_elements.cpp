
#include<iostream>
using namespace std;

int main(){
    int arr[4][4]={5,8,3,9,6,2,8,4,5,3,2,2,2,8,1,9};
    int first_sum=0;

    for(int i=0;i<4;i++){
        first_sum+=arr[i][i];
    }
    cout<<first_sum<<endl;

    int second_sum=0;
    int i=0,j=4-1;
    while(j>=0){
        second_sum+=arr[i][j];
        i++;
        j--;
    }
    cout<<second_sum;
}