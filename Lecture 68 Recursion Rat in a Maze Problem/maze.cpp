
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

bool valid(int i, int j, int n){
    return i>=0 && j>=0 && i<n && j<n;
}

void total(vector<vector<int>>&maze, int n, int i, int j, vector<string>&ans,vector<vector<bool>>&visited, string path, int row[], int col[],string dir ){
    if(i==n-1&&j==n-1){
        ans.push_back(path);
        return;
    }

    visited[i][j]=1;

    for(int k=0;k<4;k++){
        if(valid(i+row[k],j+col[k],n) && maze[i+row[k]][j+col[k]] && !visited[i+row[k]][j+col[k]]){
            path.push_back(dir[k]);
            total(maze, n, i+row[k], j+col[k],ans, visited, path, row, col, dir);
            path.pop_back();
        }
    }

    visited[i][j]=0;
    
}


int main(){
    vector<vector<int>> maze= {{1, 0, 0, 0}, {1, 1, 0, 1}, {1, 1, 0, 0}, {0, 1, 1, 1}};
    int n=4;
    int row[]={-1,1,0,0};
    int col[]={0,0,-1,1};
    string dir="UDLR";
    vector<string> ans;
    vector<vector<bool>> visited(n, vector<bool>(n, false));
    string path;

    if(!maze[0][0]==0){
    total(maze,n,0,0,ans,visited,path,row,col,dir);
    }

    for(int i=0;i<ans.size();i++){
        cout << ans[i] << endl;
    }

    return 0;
}