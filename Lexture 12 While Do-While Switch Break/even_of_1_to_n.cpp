
#include <iostream>
using namespace std;

int main()
{
    int n = 20, i = 1;

    while (i <= n)
    {
        if (i % 2 == 0)
        {
            cout << i << " ";
        }
        i++;
    }
}