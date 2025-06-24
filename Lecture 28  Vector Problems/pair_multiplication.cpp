
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    vector <int> v={6,4,1,7,2};
    sort(v.begin(),v.end());
    int start=0,end=v.size()-1;
    int target=28;

    while(start<end){
        int mul=v[start]*v[end];
        if(mul==target){
            cout<<start<<" "<<end<<" ";
            break;
        }else if(mul<target)
            start++;
        else if(mul>target)
            end--;
    }
    return 0;
}