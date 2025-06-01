
#include <iostream>
using namespace std;

char convert(char n)
{
    char ans = n - 'a' + 'A';
    return ans;
}

int main()
{
    char n;
    cout << "ENTER: ";
    cin >> n;

    cout << convert(n);
}