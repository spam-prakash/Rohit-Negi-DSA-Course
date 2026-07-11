
#include<iostream>
#include<vector>
#include<fstream>
#include<algorithm>
using namespace std;

int main(){
    vector<int>inp(5);
    cout<<"Enter Inputs: ";
    for(int i=0;i<5;i++){
        cin>>inp[i];
    }

    // OPEN
    ofstream fout;
    fout.open("file.txt");

    // WRITE
    fout<<"Original Data: \n";
    for(int i=0;i<5;i++){
        fout<<inp[i]<<" ";
    }

    sort(inp.begin(),inp.end());

    fout<<"\nSorted Data: \n";
    for(int i=0;i<5;i++){
        fout<<inp[i]<<" ";
    }


    // CLOSE
    fout.close();

    // OPEN
    ifstream fin;
    fin.open("file.txt");

    // READ
    char c;
    while(fin.get(c)){
        cout<<c;
    }

    // CLOSE
    fin.close();
}