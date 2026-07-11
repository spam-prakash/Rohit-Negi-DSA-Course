
#include<iostream>
#include<fstream>
using namespace std;

int main(){
    // OPEN
    ofstream fout;
    fout.open("file.txt");

    // WRITE
    fout<<"Hello World!";

    // CLOSE
    fout.close();
}