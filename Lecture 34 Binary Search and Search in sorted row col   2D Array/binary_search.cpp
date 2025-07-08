
#include <iostream>
#include <vector>
#include<vector>
using namespace std;

// int main()
// {
//     vector<vector<int>> matrix = {
//         {2, 6, 10, 14, 18},
//         {20, 24, 27, 29, 38},
//         {47, 52, 78, 93, 102},
//         {108, 111, 200, 218, 320}
//     };
//     int target=5;
//     int rows=matrix.size(),cols=matrix[0].size();

//     for(int i=0;i<rows;i++){
//         if(matrix[i][0]<=target && matrix[i][cols-1]>=target){
//             int start=0,end=cols-1;
//             while(start<=end){
//                 int mid=start+(end-start)/2;
//                 if(matrix[i][mid]==target){
//                     cout<<1;
//                     break;
//                 }else if(matrix[i][mid]<target){
//                     start=mid+1;
//                 }else if(matrix[i][mid]>target){
//                     end=mid-1;
//                 }
//                 cout<<0;
//             }
//         }else{
//         }
//     }
    
    
// }


int main(){
    vector<vector<int>> matrix = {
        {2, 6, 10, 14, 18},
        {20, 24, 27, 29, 38},
        {47, 52, 78, 93, 102},
        {108, 111, 200, 218, 320}
    };
    int target=5;
    int rows=matrix.size(),cols=matrix[0].size();
    bool found=0;

    int start=0,end=rows* cols-1;

    while(start<=end){
        int mid=start+(end-start)/2;
        int row_index=mid/cols;
        int col_index=mid%cols;

        if(matrix[row_index][col_index]==target){
            found=1;
            break;
        }else if(matrix[row_index][col_index]<target){
            start=mid+1;
        }else if(matrix[row_index][col_index]>target){
            end=mid-1;
        }
        // cout<<0;
    }

    if(found){
        cout<<1;
    }else {
        cout<<0;
    }
}