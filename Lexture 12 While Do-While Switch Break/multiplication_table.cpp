// 2 X 1 = 2
// 2 X 2 = 4
// 2 X 3 = 6
// 2 X 4 = 8
// 2 X 5 = 10
// 2 X 6 = 12
// 2 X 7 = 14
// 2 X 8 = 16
// 2 X 9 = 18
// 2 X 10 = 20

#include <iostream>
using namespace std;

int main()
{
    int n = 2, i = 1;

    while (i <= 10)
    {
        cout << n << " X " << i << " = " << n * i;
        cout << endl;
        i++;
    }
}