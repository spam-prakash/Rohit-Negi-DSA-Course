
#include <iostream>
using namespace std;
#include<vector>

int main(){
    vector <int> v={2,3,5,10,50,80};
    int target=45;
    int start=0,end=1;

    if(target<0)
        target=target*-1;

    while(end<v.size()){
        if(start==end){
            end++;
            continue;
        }
        int diff=v[end]-v[start];
        if(diff==target){
            cout<<start<<" "<<end<<" ";
            break;
        }else if(diff>target)
            start++;
        else if(diff<target)
            end++;
    }

}