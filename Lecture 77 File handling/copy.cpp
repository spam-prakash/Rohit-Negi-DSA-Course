
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
    ifstream fin;
    fin.open("old.txt");
    ofstream fout;
    fout.open("new.txt");

    string line;

    while(getline(fin,line)){
        fout<<line<<endl;
    }
    cout<<"Content Copied.\n";

    fin.close();
    fout.close();
    cout<<"Files Closed.";
}