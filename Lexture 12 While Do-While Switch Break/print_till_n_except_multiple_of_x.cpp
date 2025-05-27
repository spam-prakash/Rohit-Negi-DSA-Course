#include <iostream>
using namespace std;

int main()
{
    int n = 16, x = 4, i = 1;

    while (i <= n)
    {
        if (i % x == 0)
        {
            i++;
            continue;
        }
        cout << i << " ";
        i++;
    }
}