
#include<iostream>
using namespace std;

int main(){
    // Initilize
        // int arr[4][3];
            // 1 2 3 
            // 4 5 6
            // 7 8 9
            // 10 11 12

        // arr[0][0]=1;
        // arr[0][1]=2;
        // arr[0][2]=3;
        // arr[1][0]=4;
        // arr[1][1]=5;
        // arr[1][2]=6;
        // arr[2][0]=7;
        // arr[2][1]=8;
        // arr[2][2]=9;
        // arr[3][0]=10;
        // arr[3][1]=11;
        // arr[3][2]=12;



        // int arr[4][3]={1,2,3,4,5,6,7,8,9,10,11,12};

            int arr[4][3];
        for(int i=0;i<4;i++){
            for(int j=0;j<3;j++){
                cout<<"ENTER ELEMENT FOR "<<i<<j<<" : ";
                cin>>arr[i][j];
            }
        }





        for(int i=0;i<4;i++){
            for(int j=0;j<3;j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
}