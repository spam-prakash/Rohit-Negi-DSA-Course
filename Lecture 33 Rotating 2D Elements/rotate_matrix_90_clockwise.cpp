
#include <iostream>
#include <vector>
using namespace std;

// int main(){
//     vector<vector<int>> matrix={
//         {1,2,3,4},
//         {5,6,7,8},
//         {9,10,11,12},
//         {13,14,15,16},
//     };

//     int rows=matrix.size(),cols=matrix[0].size();

//     vector <vector<int>> result(rows,vector<int>(cols));

//     for(int i=0;i<rows;i++){
//         for(int j=0;j<cols;j++){
//             result[j][rows-1-i]=matrix[i][j];
//         }
//     }

//     for(int i=0;i<rows;i++){
//         for(int j=0;j<cols;j++){
//             cout<<result[i][j]<<" ";
//         }
//         cout<<endl;
//     }

// }


// SOLVE WITHOUT USING EXTRA SPACE:

int main(){
    vector<vector<int>> matrix={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16},
    };

    int n=matrix.size();

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    for(int i=0;i<n;i++){
        int start=0,end=n-1;
        while(start<end){
            swap(matrix[i][start],matrix[i][end]);
            start++;
            end--;
        }
    }


    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<matrix[i][j]<< " ";
        }
        cout<<endl;
    }
}