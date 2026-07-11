
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
    // OPEN
    ofstream fout;
    fout.open("multiline.txt");

    // WRITE
    fout<<"Hello World!\n";
    fout<<"Hello India!\n";
    fout<<"Hello Everyone!\n";

    // CLOSE 
    fout.close();

    // Read
    ifstream fin;
    fin.open("multiline.txt");

    string line;

    while(getline(fin,line)){
        cout<<line<<endl;
    }

    // CLOSE
    fin.close();
}