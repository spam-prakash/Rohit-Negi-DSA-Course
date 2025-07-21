
#include<iostream>
#include<vector>
using namespace std;

vector <int> add(vector<int>arr1,vector<int>arr2){
    int index1=arr1.size()-1,index2=arr2.size()-1;
    int sum=0, carry=0;
    vector<int>result;

    while(index1 >= 0 || index2 >= 0 || carry){
      int sum=carry;
       if(index1>=0) sum+=arr1[index1--];
       if(index2>=0) sum+=arr2[index2--];
       result.push_back(sum%10);
       carry=sum/10;
    }
    return result;
}

int main(){
    vector<int> arr1={9,9,9,9,9,9,9};
    vector<int> arr2={9,9,9,9};
    int size1=arr1.size(),size2=arr2.size();
    vector<int>result=add(arr1,arr2);
     for (int num : result) {
        cout << num << " ";
    }

    return 0;
}