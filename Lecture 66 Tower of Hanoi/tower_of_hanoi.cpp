
#include<iostream>
using namespace std;

void toh(int n, int source, int helper, int dest,int &ans){
    if(n==1){
        ans++;
        cout<<"Move disk"<<n<<" from "<<source<<" to "<<dest<<endl;
        return;
    }
    // ans++;
    toh(n-1,source,dest,helper,ans);
    cout<<"Move disk"<<n<<" from "<<source<<" to "<<dest<<endl;
    ans++;
    toh(n-1,helper,source,dest,ans);
}

int main(){
    int ans=0;
    toh(2,1,2,3,ans);
    cout<<ans;
    return 0;
}