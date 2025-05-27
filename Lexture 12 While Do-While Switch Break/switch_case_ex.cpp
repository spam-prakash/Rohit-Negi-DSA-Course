#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter Number: ";
    cin >> n;

    switch (n)
    {
    case 1:
        cout << "mohit";
        break;
    case 2:
        cout << "rohit";
        break;
    case 3:
        cout << "sohit";
        break;
    default:
        cout << "Invalid input";
        break;
    }
}