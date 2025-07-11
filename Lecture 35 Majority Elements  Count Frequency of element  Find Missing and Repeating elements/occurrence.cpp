
#include<iostream> 
#include<vector>
using namespace std;

int main(){
    vector <int> arr={4,3,2,1,2,6,7};
    int size=arr.size();
    vector<int> count(size,0);

    for(int i=0;i<size;i++){
        count[arr[i]-1]++;
    }

    for(int i=0;i<size;i++){
        cout<<count[i]<<" ";
    }
}