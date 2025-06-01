
#include<iostream>
using namespace std;

int main(){
    char row='E';
    int col=4;
    cout<<"ENTER ROW (A-H): ";
    cin>>row;
    row = toupper(row);
    cout<<"ENTER COL (1-8): ";
    cin>>col;
    int total=0;

    total+=min(8-col,row-'A')+min(col-1,row-'A')+min(col-1,'H'-row)+min(8-col,'H'-row);
    cout << "Total bishop moves: " << total << endl;
}