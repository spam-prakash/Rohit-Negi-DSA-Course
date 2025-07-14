#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    string s = "is2 sentence4 This1 a3";
    vector<string> ans(10);
    int count = 0;

    string temp;
    for (int j = 0; j < s.size(); j++)
    {
        if (s[j] == ' ')
        {
            int index = temp[temp.size() - 1] - '0';
            temp.pop_back();
            ans[index] = temp;
            temp.clear();
            count++;
        }else{

            temp += s[j];
        }


    }
    int index = temp[temp.size() - 1] - '0';
    temp.pop_back();
    ans[index] = temp;
    temp.clear();
    count++;


    for (int i = 1; i <= count; i++)
    {
        temp += ans[i];
        temp += ' ';
    }
    temp.pop_back();
    cout << temp;
}