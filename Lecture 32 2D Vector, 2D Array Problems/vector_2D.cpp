
#include <iostream>
#include<vector>
#include <algorithm>
using namespace std;

int main(){
    // vector <vector<int> >matrix(4,vector<int>(2,0));


    // matrix[0][0]=0;
    // matrix[0][1]=1;
    // matrix[1][0]=2;
    // matrix[1][1]=3;
    // matrix[2][0]=4;
    // matrix[2][1]=5;
    // matrix[3][0]=6;
    // matrix[3][1]=7;

    // cout<<"Rorw: "<<matrix.size()<<endl;
    // cout<<"Cols: "<<matrix[0].size();

    int row,col;
    cin>>row>>col;
    vector <vector<int> >matrix(row,vector<int>(col));
    // cout<<"ENTER ELEMENTS: ";

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<"ENTER ELEMENT FOR "<<i<<j<<" : ";
            cin>> matrix[i][j];
        }
    }

    cout<<endl;



    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }


return 0;
}