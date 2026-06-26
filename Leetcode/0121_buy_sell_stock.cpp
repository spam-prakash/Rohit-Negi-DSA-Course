
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>prices={7,1,5,3,6,4};
    int minPrice=INT_MAX, maxProfit=INT_MIN;

    for(int x:prices){
        if(x<minPrice) minPrice=x;
        if(x-minPrice>maxProfit) maxProfit=x-minPrice;
    }
    cout<<maxProfit;
}