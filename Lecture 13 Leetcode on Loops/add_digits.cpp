// ENTER NUMBER: 569
// 20

#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0, rem, quotient;
    cout << "ENTER NUMBER: ";
    cin >> n;
    while (n > 0)
    {
        rem = n % 10;
        n = n / 10;
        sum = sum + rem;
    }
    cout << sum;
}