
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "ENTER NUMBER: ";
    cin >> n;
    int ans = 0, mul = 1,rem;

    while (n)
    {
        rem = n % 2;
        rem = !rem;
        ans = ans + rem * mul;
        mul *= 2;

        n /= 2;
    }
    cout << ans;
}