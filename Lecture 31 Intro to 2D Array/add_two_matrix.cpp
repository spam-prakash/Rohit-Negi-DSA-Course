
#include <iostream>
using namespace std;

int main(){
    int arr1[4][3]={1,2,3,4,5,6,7,8,9,10,11,12};
    int arr2[4][3]={1,2,3,4,5,6,7,8,9,10,11,12};
    int sum[4][3];
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            sum[i][j]=arr1[i][j]+arr2[i][j];
        }
    }

    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            cout<<sum[i][j]<<" ";
        }
        cout<<endl;
    }
}