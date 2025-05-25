//         A
//       A B
//     A B C
//   A B C D
// A B C D E

#include <iostream>
using namespace std;

int main(){
    int pr=65;

    for(int i=1;i<=5;i++){
        for(int j=0;j<5-i;j++)
            cout<<"  ";
        for(int j=0;j<i;j++){
            cout<<static_cast<char>(pr+j)<<" ";
        }
        cout<<endl;
    }
}