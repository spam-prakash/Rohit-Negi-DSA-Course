// AKASH@lenovo MINGW64 ~/Desktop/Rohit Negi DSA/Lecture 13 Leetcode on Loops (main)
// $ g++ complement_of_n.cpp -o run.exe &&  ./run.exe
// ENTER NUMBER: 14
// 1
// AKASH@lenovo MINGW64 ~/Desktop/Rohit Negi DSA/Lecture 13 Leetcode on Loops (main)
// $ g++ complement_of_n.cpp -o run.exe &&  ./run.exe
// ENTER NUMBER: 17
// 14

#include <iostream>
using namespace std;

int main()
{
    int n, ans = 0, rem, mul = 1;
    cout << "ENTER NUMBER: ";
    cin >> n;

    while (n)
    {
        rem = n % 2;
        rem = !rem;
        ans = ans + rem * mul;
        mul = mul * 2;
        n /= 2;
    }
    cout << ans;
}