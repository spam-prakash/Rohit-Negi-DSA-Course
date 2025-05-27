#include <iostream>
using namespace std;

int main()
{
    int n = 12, i = 1, sum = 0;

    do
    {
        sum += i;
        i++;
    } while (i <= n);

    cout << sum;

    return 0;
}