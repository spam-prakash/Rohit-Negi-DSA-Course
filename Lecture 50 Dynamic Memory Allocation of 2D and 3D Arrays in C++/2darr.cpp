
#include<iostream>
using namespace std;

int main(){
    int n,m;
    cout<<"ENTERR ROW & COLUMN: ";
    cin>>n>>m;

    // Initilize 2d Array
    int **ptr = new int*[n];
    for(int i=0;i<n;i++){
        ptr[i] = new int[m];
    }

    // Enter Elements in to Arrays
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<"ENTER ELEMENT FOR "<<i<<" "<<j<<" : ";
            cin>>ptr[i][j];
        }
    }

    // Print Elements From All Arrays
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<ptr[i][j]<<" ";
        }
        cout<<endl;
    }


    // Releae Heap Memory
    for(int i=0;i<n;i++){
        delete[] *(ptr+i);
    }
    delete[] ptr;
}