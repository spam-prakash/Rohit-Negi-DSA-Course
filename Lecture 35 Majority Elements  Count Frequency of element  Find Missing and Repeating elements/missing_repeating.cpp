
#include<iostream>
#include<vector>
using namespace std;

// int main(){
//     vector<int> arr={4,3,2,1,2,7,6};
//     int size=arr.size();
//     int find=1;
//     int count=0;

//     for(int i=0;i<size;i++){
        
//         if(arr[i]==find){
//             count++;
//         }
//     }
// }

int main(){
    vector<int> arr={2,2};
    int size=arr.size();
    vector<int> count(size+1, 0); // size+1 to handle 1-based indexing
    vector<int> result;

    for(int i=0;i<size;i++){
        count[arr[i]]++;
    }
    
    for(int i=1;i<=size;i++){
        // cout<<count[i]<< " ";
        if(count[i]>1){
            // cout<<"Repeating: "<<i<<endl;;
            result.push_back(i);
        }
        if(count[i]<1){
            // cout<<"Missing: "<<i<<endl;
            result.push_back(i);
        }
    }
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
    
}