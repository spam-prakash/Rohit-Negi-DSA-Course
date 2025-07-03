
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int arr[]={1,4,7,-3,9};
    int size=sizeof(arr)/sizeof(arr[0]);

    vector <int> prefix_sum(size);

    prefix_sum[0]=arr[0];
    for(int i=1;i<size;i++){
        prefix_sum[i]=prefix_sum[i-1]+arr[i];
    }

    for(int i=0;i<size;i++){
        cout<<prefix_sum[i]<<" ";
    }
}