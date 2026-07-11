
#include<iostream>
#include<fstream>
using namespace std;

int main(){
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