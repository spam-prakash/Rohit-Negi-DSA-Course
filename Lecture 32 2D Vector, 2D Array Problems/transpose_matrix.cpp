
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<vector<int>> elements = {
        {1, 2, 3, 4, 5, 6},
        {7, 8, 9, 10, 11, 12},
        {13, 14, 15, 16, 17, 18},
        {19, 20, 21, 22, 23, 24},
        {25, 26, 27, 28, 29, 30},
        {31, 32, 33, 34, 35, 36}};

        
        int n=elements.size();
        vector<vector<int>> result(n, vector<int>(n));
        
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            result[i][j]=elements[j][i];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
    

}