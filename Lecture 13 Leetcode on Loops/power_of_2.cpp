// AKASH@lenovo MINGW64 ~/Desktop/Rohit Negi DSA/Lecture 13 Leetcode on Loops (main)
// $ g++ power_of_2.cpp -o run.exe &&  ./run.exe
// ENTER NUMBER: 32
// Power: 5

// AKASH@lenovo MINGW64 ~/Desktop/Rohit Negi DSA/Lecture 13 Leetcode on Loops (main)
// $ g++ power_of_2.cpp -o run.exe &&  ./run.exe
// ENTER NUMBER: 23
// NOT A POWER.

#include <iostream>
using namespace std;

int main()
{
    int n, power = 0;
    cout << "ENTER NUMBER: ";
    cin >> n;
    if (n < 1)
    {
        cout << "NOT A POWER." << endl;
        return 0;
    }
    while (n != 1)
    {
        if (n % 2 != 0)
        {
            cout << "NOT A POWER." << endl;
            return 0;
        }
        n /= 2;
        power++;
    }
    cout << "Power: " << power << endl;
}