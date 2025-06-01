
#include <iostream>
#include<climits>
using namespace std;

int main(){
    int arr[] = {9, 99, 999, 44, 3333, 1, -4, -9,999999};
    int max = INT_MIN;
    int size = sizeof(arr) / sizeof(arr[0]);

    for(int i=0;i<size;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    cout<<max;
}