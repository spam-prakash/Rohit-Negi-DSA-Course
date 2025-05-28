// AKASH@lenovo MINGW64 ~/Desktop/Rohit Negi DSA/Lecture 13 Leetcode on Loops (main)
// $ g++ reverse_integer.cpp -o run.exe &&  ./run.exe
// ENTER A NUMBER: 123
// 321
// AKASH@lenovo MINGW64 ~/Desktop/Rohit Negi DSA/Lecture 13 Leetcode on Loops (main)
// $ g++ reverse_integer.cpp -o run.exe &&  ./run.exe
// ENTER A NUMBER: 676756
// 657676

#include <iostream>
using namespace std;

int main()
{
    int n, rnum = 0, rem;
    cout << "ENTER A NUMBER: ";
    cin >> n;

    while (n > 0)
    {
        rem = n % 10;
        rnum = rnum * 10 + rem;
        n = n / 10;
    }
    cout << rnum;
}