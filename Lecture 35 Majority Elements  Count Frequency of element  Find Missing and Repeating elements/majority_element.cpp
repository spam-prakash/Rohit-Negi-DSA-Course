
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr={2,2,2,2,3,3,3,3,3};
    int size=arr.size();
    int candidate=arr[0];
    int count=1;

    for(int i=0;i<size;i++){
        if(arr[i]==candidate){
            count++;
        }else {
            count--;
            if(count==0){
                candidate=arr[i];
                count=1;
            }
        }
    }


}