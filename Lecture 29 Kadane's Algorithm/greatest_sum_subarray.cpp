
#include<iostream>
#include<climits>
using namespace std;

// int main(){
//     int arr[]={3,4,-5,8,-12,7,6,-2};
//     int n=sizeof(arr)/sizeof(arr[0]);

//     int maxi=INT_MIN;

//     for(int i=0;i<n;i++){
//         int prefix=0;
//         for(int j=i;j<n;j++){
//             prefix+=arr[j];
//             maxi=max(maxi,prefix);
//         }
//     }
//     cout<<maxi;
// }

int main(){
    // int arr[]={4,-6,2,8};
    int arr[]={3,4,-5,8,-12,7,6,-2};

    int size=sizeof(arr)/sizeof(arr[0]);
    int sum=0,maxi=INT_MIN;
    for(int i=0;i<size;i++){
        sum+=arr[i];
        maxi=max(maxi,sum);
        if(sum<0){
            sum=0;
            // continue;
        }
    }
    cout<<maxi;
}