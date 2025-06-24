
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector <int> v={1,0,1,1,1,0,1,0};
    
    // 1st method
        // use any kind of sorting algo
        // time complexity: O(n)
    
    // 2nd method
        // use in-built sort function
        // sort(v.begin(),v.end());
        // time complexity: O(nlogn)
    
    // 3rd method
    // int count_zero=0,count_one=0;
    // for(int i=0;i<v.size();i++){
    //     if(v[i]==0)
    //         count_zero++;
    //     else if(v[i]==1)
    //         count_one++;
    // }

    // for(int i=0;i<count_zero;i++)
    //     v[i]=0;
    // for(int i=count_zero;i<v.size();i++)
    //     v[i]=1;

    // for(int i=0;i<v.size();i++)
    //     cout<<v[i]<<" ";


    // 4th Using two pointers
    int start=0;
    int end=v.size()-1;

    while(start<end){
        if(v[start]==0)
            start++;
        if(v[end]==1)
            end--;
        if(v[start]==1 && v[end]==0){
            swap(v[start],v[end]);
            start++;
            end--;
        }

    }

      for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";


}