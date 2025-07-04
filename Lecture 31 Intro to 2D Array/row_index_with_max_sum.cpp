
#include<iostream>
#include <climits>
using namespace std;

int main(){
    int arr[5][4]={3,4,7,0,2,8,3,9,7,3,0,8,2,8,9,1};
    int max_sum=INT_MIN,index=0;
    
    for(int i=0;i<5;i++){
        int row_sum=0;
        for(int j=0;j<4;j++){
            row_sum+=arr[i][j];
        }
        if(max_sum<=row_sum){
            max_sum=row_sum;
            index=i;
        }
        // max_sum=max(max_sum,row_sum);

    }
    cout<<index;
}