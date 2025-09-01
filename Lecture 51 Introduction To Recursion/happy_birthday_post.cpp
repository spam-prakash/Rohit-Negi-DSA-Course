
#include<iostream>
using namespace std;



// =========Itrative Approach=====
// int main(){

//     for(int i=5;i>0;i--){
//         cout<<i<<" days left for birthday."<<endl;
//     }
//     cout<<"Happpy Birthday!";

//     return 0;

// }



// ======Recrusion Approach=====

void post(int n){
    if(n == 0){
        cout << "Happy Birthday!" << endl;
        return;
    }
    cout<<n<<" days left for birthday."<<endl;
    post(n-1);
}


int main(){
    int n=5;
    post(n);
}