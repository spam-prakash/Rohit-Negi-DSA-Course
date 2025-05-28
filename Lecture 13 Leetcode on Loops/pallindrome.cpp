// AKASH@lenovo MINGW64 ~/Desktop/Rohit Negi DSA/Lecture 13 Leetcode on Loops (main)
// $ g++ pallindrome.cpp -o run.exe &&  ./run.exe
// ENTER NUMBER TO BE CHECKED: 123
// NOT PALLINDROME.
// AKASH@lenovo MINGW64 ~/Desktop/Rohit Negi DSA/Lecture 13 Leetcode on Loops (main)
// $ g++ pallindrome.cpp -o run.exe &&  ./run.exe
// ENTER NUMBER TO BE CHECKED: 1221
// PALLINDROME.

#include <iostream>
using namespace std;

int main()
{
    int n, rnum = 0, rem;
    cout << "ENTER NUMBER TO BE CHECKED: ";
    cin >> n;
    int num = n;

    while (n > 0)
    {
        rem = n % 10;
        n = n / 10;
        rnum = rnum * 10 + rem;
    }

    if (num == rnum)
    {
        cout << "PALLINDROME.";
    }
    else
    {
        cout << "NOT PALLINDROME.";
    }
}