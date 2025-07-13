
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string ip = "1.1.1.1";
    string ans;
    int size = ip.size();
    for (int i = 0; i < size; i++)
    {
        if (ip[i] == '.')
        {
            ans += "[.]";
        }
        else
        {
            ans += ip[i];
        }
    }
    cout << ans;
}