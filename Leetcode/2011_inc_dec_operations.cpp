
#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    vector<string>operations={"++X","++X","X++"};
    int result=0;

    for(string c:operations){
        if(c=="--X")--result;
        else if(c=="X--")result--;
        else if(c=="++X") ++result;
        else if(c=="X++") result++;
    }
    cout<<result;
}