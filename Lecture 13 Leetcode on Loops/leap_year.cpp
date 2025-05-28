// ENTER YEAR TO BE CHECKED: 1600
// A LEAP YEAR.
// ENTER YEAR TO BE CHECKED: 1700
// NOT A LEAP YEAR.

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "ENTER YEAR TO BE CHECKED: ";
    cin >> n;

    // if(n%4==0){
    //     if(n%100==0){
    //         cout<<"NOT A LEAP YEAR.";
    //     }
    //     else{
    //         cout<<"A LEAP YEAR.";
    //     }
    // }else{
    //     cout<<"NOT A LEAP YEAR.";
    // }

    // ALTERNATIVE
    if (n % 400 == 0)
        cout << "A LEAP YEAR.";
    else if (n % 4 == 0 && n % 100 != 0)
        cout << "A LEAP YEAR.";
    else
        cout << "NOT A LEAP YEAR.";
}