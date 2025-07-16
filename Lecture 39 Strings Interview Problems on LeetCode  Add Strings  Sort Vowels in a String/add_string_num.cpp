
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

string add(string num1,string num2){
int carry=0,sum;
    string ans;
    int index1=num1.size()-1,index2=num2.size()-1;

    while(index2>=0){
        sum=(num1[index1]-'0')+(num2[index2]-'0')+carry;
        carry=sum/10;
        char c='0'+sum%10;
        ans+=c;
        index1--,index2--;
    }

    while(index1>=0){
        sum=(num1[index1]-'0')+carry;
        carry=sum/10;
        char c = '0'+sum%10;
        ans+=c;
        index1--;
    }

    if(carry){
        ans+='1';
    }
    reverse(ans.begin(),ans.end());
    return ans;
}

int main(){
    string num1="938", num2="99845";
    if(num1.size()>=num2.size())
    cout<<add(num1,num2);
    else
    cout<<add(num2,num1);
}