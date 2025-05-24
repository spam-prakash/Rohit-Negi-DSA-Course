#include <iostream>
using namespace std;

// int main(){
//     int pr=97;

//     for(int i=0;i<5;i++){
//         for(int j=0;j<5;j++){
//             cout<<static_cast<char>(pr+i)<<" ";
//         }
//         cout<<endl;
//     }
// }

int main(){
    int pr=97;

    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++)
            cout<<static_cast<char>(pr+j)<<" ";
        cout<<endl;
    }
    return 0;
}