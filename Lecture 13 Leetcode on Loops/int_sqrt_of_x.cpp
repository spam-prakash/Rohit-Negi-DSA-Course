
#include <iostream>
using namespace std;

int main()
{
    int n , i = 0;
    cout<<"ENTER NUMBER: ";
    cin>>n;

    while (n >= i * i)
    {
        i++;
    }
    cout << i - 1;
}